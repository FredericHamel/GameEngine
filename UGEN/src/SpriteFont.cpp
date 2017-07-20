#include "Color.h"
#include "Sprite.h"
#include "SpriteFont.h"
#include "FileTools.h"
#include "exceptions/FileNotFoundException.h"

using ugen::Sprite;
using ugen::SpriteFont;
using ugen::FileTools;

std::map<std::string, ugen::SpriteFont*> SpriteFont::all_sprite_fonts;

SpriteFont::SpriteFont(std::string fontname)
  :id(fontname)
{
  Debug::log(StringConcat() << "Create a SpriteFont");
}

Sprite* SpriteFont::renderText(std::string text, int size, Color fg)
{
  SDL_Color fgCol = {fg.getRed(), fg.getGreen(), fg.getBlue()};

  TTF_Font *font = this->load(size);
  
  SDL_Surface* surface = TTF_RenderText_Blended(font, text.c_str(), fgCol);
  if(surface != NULL)
  {
    SDL_LockSurface(surface);
    Sprite* sprite = new Sprite("Text: " + text, Rectangle(Point2D(), surface->w, surface->h), 4, surface->pixels);
    SDL_UnlockSurface(surface);
    SDL_FreeSurface(surface);
    return sprite;
  }
  return NULL;
}

TTF_Font*
SpriteFont::load(int fontsize)
{
  TTF_Font *font = nullptr;
  try
  {
    font = this->fonts.at(fontsize);
  }
  catch(std::out_of_range)
  {
    char *buffer;
    size_t size;
    SDL_RWops *rwop = nullptr;
    FileTools::LoadFileBuffer(this->id, &size, &buffer); 
    rwop = SDL_RWFromMem(buffer, size);
    font = TTF_OpenFontRW(rwop, 1, fontsize);
    if(!font)
      throw FileNotFoundException(this->id);
    this->fonts[fontsize] = font;
  }
  return font;
}

SpriteFont::~SpriteFont()
{
  for(auto it = fonts.begin(); it != fonts.end(); ++it)
  {
    TTF_CloseFont(it->second);
  }
  Debug::log(StringConcat() << "Destroy a SpriteFont");
}

void SpriteFont::init()
{
  TTF_Init();
}

SpriteFont* SpriteFont::load_font(std::string fontname)
{
  SpriteFont *sf = nullptr;
  try
  {
    sf = SpriteFont::all_sprite_fonts.at(fontname);
  } catch(std::out_of_range)
  {
    sf = new SpriteFont(fontname);
    SpriteFont::all_sprite_fonts[fontname] = sf;
  }
  return sf;
}

void SpriteFont::unload_font(std::string fontname)
{
  auto it = SpriteFont::all_sprite_fonts.find(fontname);
  if(it != SpriteFont::all_sprite_fonts.end())
  {
    delete it->second;
    SpriteFont::all_sprite_fonts.erase(it);
  }
}

void SpriteFont::quit()
{
  TTF_Quit();
}

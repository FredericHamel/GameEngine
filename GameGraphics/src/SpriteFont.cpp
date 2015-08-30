#include "Color.h"
#include "Sprite.h"
#include "SpriteFont.h"
#include "FileTools.h"

using ugen::Sprite;
using ugen::SpriteFont;
using ugen::FileTools;

SpriteFont::SpriteFont(SDL_RWops* src, int32_t size)
{
	Debug::log(StringConcat() << "Create a SpriteFont"); 
	font = TTF_OpenFontRW(src, 1, size);
	if(font == nullptr)
		Debug::error(StringConcat() << "-- Unable to load font " << TTF_GetError());
}

Sprite* SpriteFont::renderText(std::string text, Color fg) const
{
	SDL_Color fgCol = {fg.getRed(), fg.getGreen(), fg.getBlue()};
	
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

SpriteFont::~SpriteFont()
{
	if(font != nullptr)
	{
		TTF_CloseFont(font);
		font = NULL;
	}
	Debug::log(StringConcat() << "Destroy a SpriteFont");
}

void SpriteFont::init()
{
	TTF_Init();
}

SpriteFont* SpriteFont::loadFont(std::string fontname, int32_t fontsize)
{
	char *buffer;
	size_t size;
	FileTools::LoadFileBuffer(fontname, &size, &buffer);
	SDL_RWops *rwop = SDL_RWFromMem(buffer, size);
	if(rwop == nullptr){
		Debug::error(StringConcat() << "Unable to load SDL_RWFromMem");
		return nullptr;
	}
	return new SpriteFont(rwop, fontsize);
}

void SpriteFont::unloadFont(SpriteFont* font)
{
	delete font;
}

void SpriteFont::quit()
{
	TTF_Quit();
}

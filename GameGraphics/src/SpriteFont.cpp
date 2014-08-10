#include "Color.h"
#include "Sprite.h"
#include "SpriteFont.h"

using ugen::Sprite;
using ugen::SpriteFont;

SpriteFont::SpriteFont(std::string fontname, int32_t size)
{
	font = TTF_OpenFont(fontname.c_str(), size);
	if(font == NULL)
		Debug::error(StringConcat() << "-- Unable to load font " << fontname);
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
	TTF_CloseFont(font);
	font = NULL;
}

void SpriteFont::init()
{
	TTF_Init();
}

SpriteFont* SpriteFont::loadFont(std::string fontname, int32_t size)
{
	return new SpriteFont(fontname, size);
}

void SpriteFont::unloadFont(SpriteFont* font)
{
	delete font;
}

void SpriteFont::quit()
{
	TTF_Quit();
}

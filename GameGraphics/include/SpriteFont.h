#ifndef SPRITE_FONT_H
#define SPRITE_FONT_H

#include "Common.h"
#include <SDL2/SDL_ttf.h>

class ugen::SpriteFont
{
	TTF_Font* font;
	SpriteFont(std::string, int32_t);
public:
	~SpriteFont();
	Sprite* renderText(std::string, Color) const;

	// init TTF_Font
	static void init();
	static SpriteFont* loadFont(std::string, int32_t);
	static void unloadFont(ugen::SpriteFont*);
	static void quit();
};

#endif

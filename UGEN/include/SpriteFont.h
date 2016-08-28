#ifndef SPRITE_FONT_H
#define SPRITE_FONT_H

#include "Common.h"
#include <SDL2/SDL_rwops.h>
#include <SDL2/SDL_ttf.h>

class ugen::SpriteFont
{
	std::map<int, TTF_Font*> fonts;
	static std::map<std::string, ugen::SpriteFont*> all_sprite_fonts;
	SpriteFont(SDL_RWops *, int32_t);
public:
	SpriteFont(std::string name);
	~SpriteFont();
	Sprite* renderText(std::string, Color) const;

	// init TTF_Font
	static void init();
	static SpriteFont* loadFont(std::string, int32_t);
	static void unloadFont(ugen::SpriteFont*);
	static void quit();
};

#endif

#ifndef SPRITE_FONT_H
#define SPRITE_FONT_H

#include "Common.h"
#include <SDL2/SDL_rwops.h>
#include <SDL2/SDL_ttf.h>

class ugen::SpriteFont
{
	std::string id;
	std::map<int32_t, TTF_Font*> fonts;
	static std::map<std::string, ugen::SpriteFont*> all_sprite_fonts;

	SpriteFont(std::string);
	TTF_Font* load(int size);
public:
	~SpriteFont();
	Sprite* renderText(std::string, int, Color);

	inline bool is_load(int size) const;

	// init TTF_Font
	static void init();
	static SpriteFont* load_font(std::string);
	static void unload_font(std::string);
	static void quit();
};

#endif

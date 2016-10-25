#ifndef SPRITE_FONT_TEST_H
#define SPRITE_FONT_TEST_H

#include <Common.h>
#include <Game.h>

class SpriteFontTest : public ugen::Game {
	public :
		SpriteFontTest();
		void initialize();
		void loadContent();
		void update(ugen::GameTime &);
		void draw(ugen::GameTime &);
};

#endif

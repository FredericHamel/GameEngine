#ifndef SPRITE_FONT_TEST_H
#define SPRITE_FONT_TEST_H

#include <Common.h>
#include <Game.h>

class SpriteFontTest : public ugen::Game {
	public :
		SpriteFontTest();
		void initialize() throw (std::exception);
		void loadContent() throw (std::exception);
		void update(ugen::GameTime &) throw (std::exception);
		void draw(ugen::GameTime &) throw (std::exception);
};

#endif

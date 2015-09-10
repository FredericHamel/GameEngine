#ifndef APP_GAME_H
#define APP_GAME_H

#include <Game.h>

class AppGame : public ugen::Game
{
	public:
		AppGame() throw (ugen::VideoException);
		~AppGame();

		void initialize() throw (std::exception);
		void loadContent() throw(std::exception);
		void update(ugen::GameTime&) throw (std::exception);
		void draw(ugen::GameTime&) throw (std::exception);
};

#endif // APP_GAME_H

#ifndef APP_GAME_H
#define APP_GAME_H

#include <Game.h>

class AppGame : public ugen::Game
{
	public:
		AppGame();
		~AppGame();

		void initialize();
		void loadContent();
		void update(ugen::GameTime&);
		void draw(ugen::GameTime&);
};

#endif // APP_GAME_H

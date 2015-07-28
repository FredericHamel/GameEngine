#ifndef GAME_TEST_H
#define GAME_TEST_H

#include "Game.h"

using namespace ugen;

class GameTest: public Game
{
public:
	GameTest();
	virtual ~GameTest();
	virtual void initialize();
	virtual void loadContent();
	virtual void unloadContent();
	virtual void update(GameTime&);
	virtual void draw(GameTime&);
private:
	std::vector<ColoredPoint2D*> listPoint;
	SpriteFont* fontLoader;
	GameEvent event;
};

#endif // GAME_TEST_H

#ifndef GAME_TEST_H
#define GAME_TEST_H

#include <Game.h>

using namespace ugen;

class GameTest: public Game
{
public:
	GameTest() throw (VideoException);
	virtual ~GameTest();
	virtual void initialize() throw (std::exception);
	virtual void loadContent() throw (std::exception);
	virtual void update(GameTime&) throw (std::exception);
	virtual void draw(GameTime&) throw (std::exception);
private:
	std::vector<ColoredPoint2D*> listPoint;
	SpriteFont* textRenderer;
	Sprite* text;
	GameEvent event;
};

#endif // GAME_TEST_H

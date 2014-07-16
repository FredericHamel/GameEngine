#ifndef GAME_TEST_H
#define GAME_TEST_H

#include "Game.h"

class GameTest: public Game
{
public:
	GameTest();
	virtual ~GameTest();
	virtual void Initialize();
	virtual void Update(GameTime&);
	virtual void Draw(GameTime&);
private:
	std::vector<ColoredPoint2D*> listPoint;
	GameEvent event;
};

#endif // GAME_TEST_H

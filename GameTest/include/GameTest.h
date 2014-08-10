#ifndef GAME_TEST_H
#define GAME_TEST_H

#include "Game.h"

using namespace ugen;

class GameTest: public Game
{
public:
	GameTest();
	virtual ~GameTest();
	virtual void Initialize();
	virtual void LoadContent();
	virtual void UnloadContent();
	virtual void Update(GameTime&);
	virtual void Draw(GameTime&);
private:
	std::vector<ColoredPoint2D*> listPoint;
	SpriteFont* fontLoader;
	GameEvent event;
};

#endif // GAME_TEST_H

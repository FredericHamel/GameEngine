#ifndef GAME_SYSTEM_H
#define GAME_SYSTEM_H

#include "Common.h"

class GameSystem
{
	GameSystem();
public:
	~GameSystem();

	static void Init();
	static void Init(uint32_t);
private:
	static GameSystem gameSystem;
};

#endif // GAME_SYSTEM_H
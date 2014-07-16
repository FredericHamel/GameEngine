#include "GameSystem.h"
#include <iostream>

using std::cout;
using std::endl;

GameSystem GameSystem::gameSystem;

// Initialise le video par default
void GameSystem::Init()
{
}

void GameSystem::Init(uint32_t flags)
{
	if(SDL_WasInit(flags) == flags)
	{
		SDL_InitSubSystem(flags);
	}
}

GameSystem::GameSystem()
{
	SDL_Init(SDL_INIT_VIDEO);
}

GameSystem::~GameSystem()
{
	SDL_Quit();
}
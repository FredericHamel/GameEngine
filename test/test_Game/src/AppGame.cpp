#include "AppGame.h"
#include <InputManager.h>

AppGame::AppGame()
	:ugen::Game("AppGame", 640, 480)
{
}

AppGame::~AppGame()
{
}

void
AppGame::initialize()
{
	ugen::Game::initialize();
}

void
AppGame::loadContent()
{
	ugen::Game::loadContent();
}

void
AppGame::update(ugen::GameTime& gameTime)
{
	SDL_Event event;
	while(ugen::InputManager::PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			ugen::Game::exit();
	}
	ugen::Game::update(gameTime);
}

void
AppGame::draw(ugen::GameTime& gameTime)
{
	ugen::Game::draw(gameTime);
}



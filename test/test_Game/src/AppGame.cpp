#include "AppGame.h"
#include <InputManager.h>

AppGame::AppGame() throw (ugen::VideoException)
	:ugen::Game("AppGame", 640, 480)
{
}

AppGame::~AppGame()
{
}

void
AppGame::initialize() throw (std::exception)
{
	ugen::Game::initialize();
}

void
AppGame::loadContent() throw (std::exception)
{
	ugen::Game::loadContent();
}

void
AppGame::update(ugen::GameTime& gameTime) throw (std::exception)
{
	SDL_Event event;
	while(ugen::InputManager::PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			exit();
	}
	ugen::Game::update(gameTime);
}

void
AppGame::draw(ugen::GameTime& gameTime) throw (std::exception)
{
	ugen::Game::draw(gameTime);
}



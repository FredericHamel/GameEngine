#include "FPS.h"
#include <iostream>

FPS::FPS(const ugen::Game* game, float intervalMAJ)
	:ugen::DrawableGameComponent(game)
{
	_fps = 0;
	_intervalMAJ = intervalMAJ;
	_tempsEcouleDepuisMAJ = 0.0f;
}

FPS::~FPS()
{
}

void FPS::initialize()
{
}

void FPS::loadContent()
{
}

void FPS::update(const ugen::GameTime& gameTime)
{
	_tempsEcouleDepuisMAJ += (float)gameTime.getElapsedTimeMillisecond();
	if(_tempsEcouleDepuisMAJ >= _intervalMAJ)
	{
		std::cout << "FPS: " << _fps << std::endl;
		_fps = 0;
		_tempsEcouleDepuisMAJ = 0.0f;
	}
}

void FPS::draw(const ugen::GameTime& gameTime)
{
	++_fps;
}

void FPS::unloadContent()
{
}


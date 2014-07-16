#include "GameTime.h"
#include <sys/time.h>

// Definition of class
GameTime GameTime::gameTime_;

GameTime* GameTime::getInstance()
{
	return &GameTime::gameTime_;
}

GameTime::GameTime()
{
	begin_ = 0;
	elapsedTimeMillisecond_ = 0;
}

GameTime::~GameTime()
{
}

void GameTime::Start()
{
	struct timeval now;
	gettimeofday(&now, 0);
	begin_ = now.tv_sec * 1000 + now.tv_usec / 1000;
}

float GameTime::getElapsedTimeSecond() const
{
	return this->elapsedTimeMillisecond_ / 1000.0f;
}

float GameTime::getElapsedTimeMillisecond() const
{
	return this->elapsedTimeMillisecond_;
}

void GameTime::Stop()
{
	struct timeval now;
	gettimeofday(&now, 0);
	elapsedTimeMillisecond_ = now.tv_sec * 1000 + now.tv_usec / 1000 - begin_;
}


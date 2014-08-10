#include "GameTime.h"
#include <sys/time.h>

using ugen::GameTime;

static const float MILLI_PER_SEC = 1000.0f;
static const float MICRO_PER_MILLI = 1000.0f;

// Definition of class
GameTime GameTime::gameTime_;

GameTime* GameTime::getInstance()
{
	return &GameTime::gameTime_;
}

GameTime::GameTime()
{
	begin_ = 0;
	end_ = 0;
	elapsedTimeMilliseconds_ = 0;
}

GameTime::~GameTime()
{
}

void GameTime::Init()
{
	struct timeval now;
	gettimeofday(&now, 0);
	begin_ = now.tv_sec * 1000.0 + now.tv_usec / 1000.0;
	end_ = begin_;
}

double GameTime::getElapsedTimeSecond() const
{
	return this->elapsedTimeMilliseconds_ / 1000.0;
}

double GameTime::getElapsedTimeMillisecond() const
{
	return this->elapsedTimeMilliseconds_;
}

void GameTime::Update()
{
	struct timeval now;
	gettimeofday(&now, 0);
	end_ = now.tv_sec * 1000.0 + now.tv_usec / 1000.0;
	elapsedTimeMilliseconds_ = end_ - begin_;
	begin_ = end_;
}


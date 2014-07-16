#ifndef GAMETIME_H
#define GAMETIME_H

#ifdef GAME
	#include "Common.h"
#else
	#include <cstdint>
#endif

class GameTime
{
	GameTime();
public:
	~GameTime();

	float getElapsedTimeSecond() const;
	float getElapsedTimeMillisecond() const;
	
	// Get unique instance
	static GameTime* getInstance();

	void Start();
	void Stop();
private:
	static GameTime gameTime_;

	unsigned long long begin_;
	unsigned long long elapsedTimeMillisecond_;
};

#endif // GAMETIME_H

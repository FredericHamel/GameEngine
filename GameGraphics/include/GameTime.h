#ifndef GAMETIME_H
#define GAMETIME_H

#include "Common.h"

class ugen::GameTime
{
	GameTime();
public:
	~GameTime();

	double getElapsedTimeSecond() const;
	double getElapsedTimeMillisecond() const;
	
	// Get unique instance
	static ugen::GameTime* getInstance();

	void init();
	void update();
private:
	static ugen::GameTime gameTime_;

	double begin_;
	double end_;
	double elapsedTimeMilliseconds_;
};

#endif // GAMETIME_H

#include <GameTime.h>
#include <iostream>

using namespace ugen;

int main(int argc, char **argv)
{
	GameTime *gameTime = GameTime::getInstance();
	gameTime->init();
	std::ios_base::sync_with_stdio(false);
	while(std::cin.get() != 'c')
	{
		std::cin.ignore(std::cin.rdbuf()->in_avail());
		gameTime->update();

		std::cout << "Elapsed time: " << gameTime->getElapsedTimeSecond() << std::endl;
		std::cout << "Elapsed time: " << gameTime->getElapsedTimeMillisecond() << std::endl;
	}
	return 0;
}

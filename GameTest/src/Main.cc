#include "GameTest.h"

int main(int argc, char* argv[])
{
	Debug::reset();
	try
	{
		GameTest game;
		game.run();
	}catch(std::exception& e)
	{
		Debug::error(StringConcat() << e.what());
	}
	return 0;
}

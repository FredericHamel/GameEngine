
#include "AppGame.h"
#include <iostream>
using namespace ugen;

int main(int argc, char **argv)
{
	try {
		AppGame game;
		game.run();
	} catch(ugen::RuntimeException& e)
	{
		std::cout << e << std::endl;		
	}
	return 0;
}

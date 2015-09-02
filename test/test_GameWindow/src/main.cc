#include <GameWindow.h>
#include <subsystem/Video.h>
#include <iostream>

using namespace ugen;

int main()
{
	Video video;
	GameWindow win("Window", 0, 0, 640, 480, SDL_WINDOW_SHOWN);
	std::cin.get();
	return 0;
}

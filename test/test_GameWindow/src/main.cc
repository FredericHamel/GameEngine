#include <GameWindow.h>
#include <subsystem/Video.h>
#include <iostream>
#include <GL/gl.h>
using namespace ugen;

char read()
{
	std::cin.ignore(std::cin.rdbuf()->in_avail());
	return std::cin.get();
}

int main()
{
	Video video;
	GameWindow win("Window", 0, 0, 640, 480, SDL_WINDOW_SHOWN|SDL_WINDOW_OPENGL);
	std::cin.sync_with_stdio(false);

	glClearColor(0.0f, 0.0f, 0.4f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	win.updateDraw();
	read();

	glClearColor(0.0f, 0.5f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	win.updateDraw();
	read();
	return 0;
}

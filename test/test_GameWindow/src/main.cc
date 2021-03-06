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

int main(int argc, char **argv)
{
	try {
		Video video;
		GameWindow win("Window", 0, 0, 640, 480, SDL_WINDOW_SHOWN|SDL_WINDOW_OPENGL);
		std::cin.sync_with_stdio(false);
		std::cout << "Press Ctrl-D to exit...\n";
		while(1) {
			glClearColor(0.0f, 0.0f, 0.4f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);
			win.updateDraw();
			if(read() == EOF) break;

			glClearColor(0.0f, 0.5f, 0.0f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);
			win.updateDraw();
			if(read() == EOF) break;
			
			glClearColor(0.6f, 0.0f, 0.0f, 1.0f);
			glClear(GL_COLOR_BUFFER_BIT);
			win.updateDraw();
			if(read() == EOF) break;
		}
	}catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

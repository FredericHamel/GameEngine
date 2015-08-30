#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include "Common.h"

class ugen::GameWindow
{
public:
	GameWindow(std::string, int32_t, int32_t, int32_t, int32_t, uint32_t);
	~GameWindow();
	
	void setWindowSize(int32_t, int32_t);
	void getWindowSize(int32_t&, int32_t&) const;

	void setWindowTitle(std::string);
	const char* getWindowTitle() const;
	
	void show();
	void hide();
	
	void setSwapInterval(int);

	void toggleSwapInterval();	
	void toggleFullscreen();
	
	void minimize();
	void maximize();

	void updateDraw();
private:
	SDL_Window* getInternalWindow() const;
	int32_t flags;
	SDL_Window* internal_window;
	SDL_GLContext glContext;
};

#endif

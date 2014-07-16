#include "GameWindow.h"

static int Counter = 0;

GameWindow::GameWindow(std::string title, int32_t x, int32_t y, int32_t w, int32_t h, uint32_t flags)
	:flags(0)
{
	internal_window = SDL_CreateWindow(title.c_str(), x, y, w, h, flags);
	Debug::check_assertion(internal_window == 0, StringConcat() << SDL_GetError() << "\n");
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	glContext = SDL_GL_CreateContext(getInternalWindow());
}

SDL_Window* GameWindow::getInternalWindow() const
{
	return internal_window;
}

void GameWindow::setWindowSize(int32_t w, int32_t h)
{
	SDL_SetWindowSize(getInternalWindow(), w, h);
}

void GameWindow::getWindowSize(int32_t& w, int32_t& h)
{
	SDL_GetWindowSize(getInternalWindow(), &w, &h);
}

void GameWindow::setWindowTitle(std::string title)
{
	SDL_SetWindowTitle(getInternalWindow(), title.c_str());
}

const char* GameWindow::getWindowTitle() const
{
	return SDL_GetWindowTitle(getInternalWindow());
}

void GameWindow::show()
{
	SDL_ShowWindow(internal_window);
}

void GameWindow::hide()
{
	SDL_HideWindow(internal_window);
}

void GameWindow::toggleFullscreen()
{
	flags = (flags == 0) ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0;
	SDL_SetWindowFullscreen(internal_window, flags);
}

void GameWindow::minimize()
{
	SDL_MinimizeWindow(internal_window);
}

void GameWindow::maximize()
{
	SDL_MaximizeWindow(internal_window);
}

void GameWindow::UpdateDraw()
{
	SDL_GL_SwapWindow(internal_window);
}

GameWindow::~GameWindow()
{
	SDL_GL_DeleteContext(glContext);
	SDL_DestroyWindow(internal_window);
}

#include "GameWindow.h"
#include "Debug.h"

namespace ugen
{
	GameWindow::GameWindow(const std::string& title, int32_t x, int32_t y, int32_t w, int32_t h, uint32_t flags) throw(VideoException)
		:fullscreenState(0)
	{
		Debug::log(StringConcat() << "Create GameWindow: " << title << ", flags: " << std::ios_base::hex << flags);
		SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
		internal_window = SDL_CreateWindow(title.c_str(), x, y, w, h, flags);
		if(internal_window == nullptr)
			throw VideoException(StringConcat() << SDL_GetError() << "\n");
		glContext = SDL_GL_CreateContext(getInternalWindow());
	}

	GameWindow::~GameWindow()
	{
		Debug::log(StringConcat() << "Destroy GameWindow: " << getWindowTitle());
		SDL_GL_DeleteContext(glContext);
		SDL_DestroyWindow(internal_window);
		internal_window = nullptr;
	}

	SDL_Window* GameWindow::getInternalWindow() const
	{
		return internal_window;
	}

	void GameWindow::setWindowSize(int32_t w, int32_t h)
	{
		SDL_SetWindowSize(getInternalWindow(), w, h);
	}

	void GameWindow::getWindowSize(int32_t& w, int32_t& h) const
	{
		SDL_GetWindowSize(getInternalWindow(), &w, &h);
	}

	void GameWindow::setWindowTitle(const std::string& title)
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

	/**
	 * Set swap interval,
	 * @param interval
	 *	0 for an immediate update.
	 *	1 for an update synchronized with vsync.
	 */
	void GameWindow::setSwapInterval(int interval)
	{
		SDL_GL_SetSwapInterval(interval);
	}

	void GameWindow::toggleSwapInterval()
	{
		SDL_GL_SetSwapInterval(!SDL_GL_GetSwapInterval());
	}

	void GameWindow::toggleFullscreen()
	{
		fullscreenState = fullscreenState ^ SDL_WINDOW_FULLSCREEN_DESKTOP;
		SDL_SetWindowFullscreen(internal_window, fullscreenState);
	}

	void GameWindow::minimize()
	{
		SDL_MinimizeWindow(internal_window);
	}

	void GameWindow::maximize()
	{
		SDL_MaximizeWindow(internal_window);
	}

	void GameWindow::updateDraw()
	{
		SDL_GL_SwapWindow(internal_window);
	}
}


#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include "Common.h"
#include "exceptions/VideoException.h"

namespace ugen
{
  class GameWindow
  {
    public:
      GameWindow(const std::string&, int32_t, int32_t, int32_t, int32_t, uint32_t);
      ~GameWindow();

      void setWindowSize(int32_t, int32_t);
      void getWindowSize(int32_t&, int32_t&) const;

      void setWindowTitle(const std::string&);
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
      int32_t fullscreenState;
      SDL_Window* getInternalWindow() const;
      SDL_Window* internal_window;
      SDL_GLContext glContext;
  };

}
#endif

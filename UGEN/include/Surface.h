#ifndef SURFACE_H
#define SURFACE_H

#include "Common.h"

namespace ugen
{
  class Surface
  {
    private:
      SDL_Surface *internal_surface;
    protected:
      Surface();
      void set_internal_surface(SDL_Surface*);
      SDL_Surface* get_internal_surface() const;
    public:
      Surface(int width, int height);
      virtual ~Surface();

      explicit operator const SDL_Surface*() const;
  };
}

#endif

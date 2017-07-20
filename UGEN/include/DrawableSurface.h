#ifndef UGEN_DRAWABLE_SURFACE
#define UGEN_DRAWABLE_SURFACE

#include "Common.h"

namespace ugen
{
  class DrawableSurface : public ugen::Surface
  {
    private:
      GLuint buffer_id;
    public:
      DrawableSurface(int, int);
      virtual ~DrawableSurface();

      void bind() const;
      void draw(SDL_Surface*, const ugen::Rectangle& src, const ugen::Rectangle& dest);
      void render() const;
      void render(const Point2D&) const;
  };
}

#endif

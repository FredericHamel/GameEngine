#ifndef UGEN_GLYPH_H
#define UGEN_GLYPH_H

#include "Common.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Font.h"
#include "Surface.h"

namespace ugen
{
  class Glyph : public ugen::Surface
  {
    private:
      int minx, miny, maxx, maxy, advance;
    public:
      Glyph(const Font&, uint16_t, Color&);
      virtual ~Glyph();
  };
}

#endif // UGEN_GLYPH_H

#ifndef UGEN_FONT_H
#define UGEN_FONT_H

#include "Common.h"

namespace ugen
{
  class Glyph;

  class Font
  {
    private:
      std::string id;
      TTF_Font* font;
    public:
      Font();
      Font(std::string);
      ~Font();

      void load();
      bool is_load();

      Glyph get_glyph(uint16_t);

    friend class Glyph;
  };
}

#endif // UGEN_FONT_H

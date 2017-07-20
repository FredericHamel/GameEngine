
#include "Glyph.h"
#include "Color.h"

namespace ugen
{
  Glyph::Glyph(const Font& f, uint16_t c, Color& color)
    :Surface()
  {
    this->set_internal_surface(TTF_RenderGlyph_Blended(f.font, c, *(SDL_Color*)&color));
    TTF_GlyphMetrics(f.font, c, &this->minx, &this->maxx, &this->miny, &this->maxy, &this->advance);
  }

  // TODO Complete Font, Glyph
  Glyph::~Glyph()
  {
  }
}

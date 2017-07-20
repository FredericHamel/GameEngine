#include "Surface.h"
#include "DrawableSurface.h"
#include "Rectangle.h"

using ugen::Surface;
using ugen::Rectangle;

namespace ugen
{
  DrawableSurface::DrawableSurface(int w, int h)
    :Surface(w, h)
  {
    const SDL_Surface *cte = this->get_internal_surface();
    glGenTextures(1, &this->buffer_id);
    glGenTextures(1, &buffer_id);
    glBindTexture(GL_TEXTURE_2D, this->buffer_id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
        cte->w,
        cte->h, 0,
        GL_BGRA, GL_UNSIGNED_BYTE,
        cte->pixels);
  }

  DrawableSurface::~DrawableSurface()
  {
    glDeleteTextures(1, &this->buffer_id);
  }

  void DrawableSurface::draw(SDL_Surface* surface, const Rectangle& src, const Rectangle& dest)
  {
    const SDL_Rect& src_rect = static_cast<const SDL_Rect&>(src);
    const SDL_Rect& dest_rect = static_cast<const SDL_Rect&>(dest);
    SDL_BlitSurface(surface, (SDL_Rect*)&src_rect, this->get_internal_surface(), (SDL_Rect*)&dest_rect);
  }

  void DrawableSurface::bind() const
  {
    glBindTexture(GL_TEXTURE_2D, this->buffer_id);
  }

  void DrawableSurface::render() const
  {
    SDL_Surface *s = this->get_internal_surface();
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3i(0, s->clip_rect.h, 0);
    glTexCoord2f(1.0f, 1.0f); glVertex3i(s->clip_rect.w, s->clip_rect.h, 0);
    glTexCoord2f(1.0f, 0.0f); glVertex3i(s->clip_rect.w, 0, 0);
    glTexCoord2f(0.0f, 0.0f); glVertex3i(0, 0, 0);
    glEnd();
  }

  void DrawableSurface::render(const Point2D& dst) const
  {
    int x = dst.getX();
    int y = dst.getY();
    SDL_Surface *s = this->get_internal_surface();
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f); glVertex3i(x, y + s->clip_rect.h, 0);
    glTexCoord2f(1.0f, 1.0f); glVertex3i(x+s->clip_rect.w, y + s->clip_rect.h, 0);
    glTexCoord2f(1.0f, 0.0f); glVertex3i(x+s->clip_rect.w, y, 0);
    glTexCoord2f(0.0f, 0.0f); glVertex3i(x, y, 0);
    glEnd();
  }
}

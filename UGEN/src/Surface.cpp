#include "Surface.h"
#include "exceptions/RuntimeException.h"

namespace ugen
{
  Surface::Surface()
  {
    this->internal_surface = nullptr;
  }

  Surface::Surface(int width, int height)
  {
    this->internal_surface = SDL_CreateRGBSurface(0, width, height, 32, 0, 0, 0, 0);
    if(this->internal_surface)
      throw RuntimeException(StringConcat() << "Unable to create surface.");
  }

  Surface::~Surface()
  {
    SDL_FreeSurface(this->internal_surface);
    this->internal_surface = nullptr;
  }

  SDL_Surface*
  Surface::get_internal_surface() const
  {
    return this->internal_surface;
  }

  void
  Surface::set_internal_surface(SDL_Surface* surface)
  {
    this->internal_surface = surface;
  }

  Surface::operator const SDL_Surface*() const
  {
    return this->internal_surface;
  }
}

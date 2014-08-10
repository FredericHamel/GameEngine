#include "ImageTools.h"
#include "FileTools.h"
#include <SDL/SDL_image.h>

using ugen::Sprite;
using ugen::ImageTools;

void ImageTools::Init()
{
	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
}

Sprite* ImageTools::Load(const std::string& nomImage)
{
	SDL_Surface* surface = 0;
	char* buffer;
	size_t size;
	FileTools::LoadFileBuffer(nomImage.c_str(), &size, &buffer);
	SDL_RWops* rw = SDL_RWFromMem(buffer, int(size));
	surface = IMG_Load_RW(rw, 0);
	FileTools::UnloadFileBuffer(&buffer);
	SDL_RWclose(rw);

	Debug::check_assertion(surface == 0, StringConcat() << "Failed to load surface...\n");

	Sprite* out = new Sprite(nomImage, Rectangle(Point2D(), surface->w, surface->h), surface->format->BytesPerPixel, surface->pixels);
	SDL_FreeSurface(surface);
	return out;
}

void ImageTools::Unload(Sprite* s)
{
	delete s;
}

void ImageTools::Quit()
{
	IMG_Quit();
}

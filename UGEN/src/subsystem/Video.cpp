#include "subsystem/Video.h"
#include <SDL2/SDL.h>

ugen::Video::Video()
{
	SDL_InitSubSystem(SDL_INIT_VIDEO);
}

ugen::Video::~Video()
{
	SDL_QuitSubSystem(SDL_INIT_VIDEO);
}


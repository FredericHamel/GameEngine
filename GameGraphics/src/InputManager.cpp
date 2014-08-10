#include "InputManager.h"

using ugen::InputManager;

bool InputManager::PollEvent(GameEvent* event)
{
	return SDL_PollEvent(event);
}

void InputManager::WaitEvent(GameEvent* event)
{
	SDL_WaitEvent(event);
}

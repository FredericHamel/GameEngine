#include "InputManager.h"

bool InputManager::PollEvent(GameEvent* event)
{
	SDL_PollEvent(event);
}

void InputManager::WaitEvent(GameEvent* event)
{
	SDL_WaitEvent(event);
}
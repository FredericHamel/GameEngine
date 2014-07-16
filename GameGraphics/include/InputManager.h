#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "Common.h"

class InputManager
{
public:
	InputManager() = delete;
	static bool PollEvent(GameEvent*);
	static void WaitEvent(GameEvent*);
};

#endif // INPUT_MANAGER_H
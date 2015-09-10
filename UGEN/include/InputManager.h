#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "Common.h"

class ugen::InputManager
{
public:
	InputManager() = delete;
	static bool PollEvent(ugen::GameEvent*);
	static void WaitEvent(ugen::GameEvent*);
};

#endif // INPUT_MANAGER_H

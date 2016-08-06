#include "subsystem/ALSound.h"

using ugen::ALSound;

bool ALSound::initialized = false;
float ALSound::volume = 1.0f;
ALCdevice *ALSound::device = nullptr;
ALCcontext *ALSound::ctx = nullptr;

ALSound::ALSound()
	:ALSound(std::string(""))
{
}

ALSound::ALSound(const std::string& sound_name)
	:id(sound_name), buffer(AL_NONE)
{
}

bool
ALSound::is_initialized()
{
	return ALSound::initialized;
}

void
ALSound::initialize()
{
	ALSound::device = alcOpenDevice(nullptr);
	if(!device)
		throw 1;
}


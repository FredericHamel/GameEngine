#include "subsystem/ALSound.h"

using ugen::ALSound;

bool ALSound::initialized = false;
float ALSound::volume = 1.0f;
ALCdevice *ALSound::device = nullptr;
ALCcontext *ALSound::ctx = nullptr;

std::map<std::string, ALSound*> ALSound::all_sounds;
std::list<ALSound*> ALSound::playing;

ALSound::ALSound()
	:ALSound(std::string(""))
{
}

ALSound::ALSound(const std::string& sound_name)
	:id(sound_name), buffer(AL_NONE)
{
}



void
ALSound::initialize()
{
	if(!ALSound::is_initialized())
	{
		ALSound::device = alcOpenDevice(nullptr);
		// TODO add real exception
		if(!ALSound::device)
			throw 1;
		ALSound::ctx = alcCreateContext(ALSound::device, nullptr);
		ALSound::initialized = true;
	}
}

void
ALSound::quit()
{
	alcDestroyContext(ALSound::ctx);
	alcCloseDevice(ALSound::device);

	ALSound::device = nullptr;
	ALSound::ctx = nullptr;
}


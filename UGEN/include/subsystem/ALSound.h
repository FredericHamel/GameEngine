#ifndef UGEN_AL_SOUND_H
#define UGEN_AL_SOUND_H

#include <string>
#include <AL/al.h>
#include <AL/alc.h>
namespace ugen {
	class ALSound
	{
		static bool initialized;
		static float volume;
		static ALCdevice *device;
		static ALCcontext *ctx;

		ALuint buffer;
		std::string id;
		public:
		ALSound();
		ALSound(const std::string&);
		~ALSound();

		static void initialize();
		static bool is_initialized();
		static void quit();
	};
}
#endif

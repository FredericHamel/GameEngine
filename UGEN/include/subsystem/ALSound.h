#ifndef UGEN_AL_SOUND_H
#define UGEN_AL_SOUND_H

#include "../Common.h"

#include <AL/al.h>
#include <AL/alc.h>

namespace ugen {
	class ALSound
	{
			static bool initialized;
			static float volume;
			static ALCdevice *device;
			static ALCcontext *ctx;
			static std::map<std::string, ALSound*> all_sounds;
			static std::list<ALSound*> playing;

			ALuint buffer;
			std::string id;
		public:
			ALSound();
			ALSound(const std::string&);
			~ALSound();

			const std::string& get_id() const;

			static void initialize();
			static bool is_initialized();
			static void quit();
	};

	inline
	const std::string& ALSound::get_id() const
	{
		return this->id;
	}

	inline
	bool
	ALSound::is_initialized()
	{
		return ALSound::initialized;
	}
}



#endif

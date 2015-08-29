#ifndef _FILE_NOT_FOUND_EXCEPTION
#define _FILE_NOT_FOUND_EXCEPTION

#include "IOException.h"

#pragma GCC visibility push(default)

namespace ugen
{
	class FileNotFoundException : public ugen::IOException
	{
		public:
			FileNotFoundException(const std::string& msg);
	};
}
#pragma GCC visibility pop

#endif //_FILE_NOT_FOUND_EXCEPTION

#ifndef IO_EXCEPTION_H
#define IO_EXCEPTION_H

#include "RuntimeException.h"

#pragma GCC visibility push(default)

namespace ugen
{
	class IOException: public RuntimeException
	{
		public:
			IOException(const std::string&);
		protected:
			IOException(const std::string&, const std::string&);
	};
}

#pragma GCC visibility pop

#endif


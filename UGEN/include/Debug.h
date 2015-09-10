#ifndef DEBUG_H
#define DEBUG_H

#include "StringConcat.h"

class Debug
{
public:
	static void init(std::string);
	static void reset();
	static void check_assertion(bool, const StringConcat&);
	static void error(const StringConcat&);
	static void warning(const StringConcat&);
	static void log(const StringConcat&);
};

#endif

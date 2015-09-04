#ifndef FILE_TOOLS_H
#define FILE_TOOLS_H

#include "Common.h" 
#if _WIN32 || _WIN64
 #include <physfs/physfs.h>
#else
 #include <physfs.h>
#endif

#include "exceptions/IOException.h"

class ugen::FileTools
{
public:
	enum TYPE_APPEND
	{
		PREV_APPEND,
		SUFF_APPEND
	};
private:
	FileTools();
public:
	static void Init();
	static void AddSearchPath(const char*, FileTools::TYPE_APPEND=FileTools::SUFF_APPEND);
	static void LoadFileBuffer(const std::string&, size_t*, char**) throw(ugen::IOException);
	static void UnloadFileBuffer(char **);
	static void Quit();
};

#endif

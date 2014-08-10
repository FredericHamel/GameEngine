#ifndef FILE_TOOLS_H
#define FILE_TOOLS_H

#include "Common.h" 
#include <physfs/physfs.h>

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
	static void AddSearchPath(const char*, FileTools::TYPE_APPEND);
	static void LoadFileBuffer(const std::string&, size_t*, char**);
	static void UnloadFileBuffer(char **);
	static void Quit();
};

#endif

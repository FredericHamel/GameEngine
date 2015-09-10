
#ifndef IMAGE_TOOLS_H
#define IMAGE_TOOLS_H

#include "Common.h"
#include "Sprite.h"

class ugen::ImageTools
{
public:
	ImageTools() = delete;
	static void Init();
	static ugen::Sprite* Load(const std::string&);
	static void Unload(ugen::Sprite*);
	static void Quit();
};

#endif // IMAGE_TOOLS_H

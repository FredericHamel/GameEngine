
#ifndef IMAGE_TOOLS_H
#define IMAGE_TOOLS_H

#include "Common.h"
#include "Sprite.h"

class ImageTools
{
public:
	ImageTools() = delete;
	static void Init();
	static Sprite* Load(const std::string&);
	static void Unload(Sprite*);
	static void Quit();
};

#endif // IMAGE_TOOLS_H
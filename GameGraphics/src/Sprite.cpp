#include "Sprite.h"
#include <GL/gl.h>

using ugen::Sprite;

Sprite::Sprite(const std::string& spriteID, const Rectangle& dimension, int32_t nOfColor, void* data)
	:dimension_(dimension)
{
	setSpriteID(spriteID);
	setData(data, nOfColor);
}

Sprite::~Sprite()
{
	glDeleteTextures(1, &buffer_);
}

void Sprite::setData(void* data, int32_t nOfColor)
{
	GLenum format;
	switch(nOfColor)
	{
		case 3:
			format = GL_RGB;
			break;
		case 4:
			format = GL_RGBA;
			break;
		default:
			Debug::error(StringConcat() << "Error: The image doesn't have true color...\n");
	}

	glGenTextures(1, &buffer_);
	glBindTexture(GL_TEXTURE_2D, buffer_);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexImage2D(GL_TEXTURE_2D, 0, format, getDimension().getWidth(), getDimension().getHeight(), 0, GL_BGRA, GL_UNSIGNED_BYTE, data);
}

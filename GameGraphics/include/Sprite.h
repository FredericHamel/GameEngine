#ifndef SPRITE_H
#define SPRITE_H

#include "Common.h"
#include "Rectangle.h"

class Sprite
{
	Sprite(const std::string& spriteID, const Rectangle& dimension, int32_t nOfColor, void* data);

	void setSpriteID(const std::string& spriteID);
	void setData(void* data, int32_t nOfColor);
public:
	Sprite(const Sprite&) = delete;
	~Sprite();

	const std::string& getSpriteID() const;
	const Rectangle& getDimension() const;
	int32_t getWidth() const;
	int32_t getHeight() const;
	uint32_t getBuffer() const;
private:
	std::string spriteID_;
	Rectangle dimension_;
	uint32_t buffer_;

friend class ImageTools;
};

inline void Sprite::setSpriteID(const std::string& spriteID)
{
	this->spriteID_ = spriteID;
}

inline const std::string& Sprite::getSpriteID() const
{
	return this->spriteID_;
}

inline const Rectangle& Sprite::getDimension() const
{
	return this->dimension_;
}

inline int32_t Sprite::getWidth() const
{
	return this->getDimension().getWidth();
}

inline int32_t Sprite::getHeight() const
{
	return this->getDimension().getHeight();
}
inline uint32_t Sprite::getBuffer() const
{
	return this->buffer_;
}
#endif
#ifndef SPRITE_H
#define SPRITE_H

#include "Common.h"
#include "Rectangle.h"

class ugen::Sprite
{
	Sprite(const std::string& spriteID, const ugen::Rectangle& dimension, int32_t nOfColor, void* data);

	void setSpriteID(const std::string& spriteID);
	void setData(void* data, int32_t nOfColor);
public:
	Sprite(const ugen::Sprite&) = delete;
	~Sprite();

	const std::string& getSpriteID() const;
	const ugen::Rectangle& getDimension() const;
	int32_t getWidth() const;
	int32_t getHeight() const;
	uint32_t getBuffer() const;
private:
	std::string spriteID_;
	ugen::Rectangle dimension_;
	uint32_t buffer_;

friend class ugen::ImageTools;
friend class ugen::SpriteFont;
};

inline void ugen::Sprite::setSpriteID(const std::string& spriteID)
{
	this->spriteID_ = spriteID;
}

inline const std::string& ugen::Sprite::getSpriteID() const
{
	return this->spriteID_;
}

inline const ugen::Rectangle& ugen::Sprite::getDimension() const
{
	return this->dimension_;
}

inline int32_t ugen::Sprite::getWidth() const
{
	return this->getDimension().getWidth();
}

inline int32_t ugen::Sprite::getHeight() const
{
	return this->getDimension().getHeight();
}

inline uint32_t ugen::Sprite::getBuffer() const
{
	return this->buffer_;
}
#endif

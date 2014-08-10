#include "Color.h"

using ugen::Color;

Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	setRGBA(r, g, b, a);
}

Color::Color(Color::Palette p)
{
	int8_t bgr[3];
	memcpy(bgr, (int8_t*)&p, sizeof(p));
	setRGBA(bgr[2], bgr[1], bgr[0], 0);
}

void Color::setRGBA(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	this->r = r;
	this->b = b;
	this->g = g;
	this->a = a;
}

Color::~Color()
{
}

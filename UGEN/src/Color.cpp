#include "Color.h"

using ugen::Color;

Color::Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
  setRGBA(r, g, b, a);
}

Color::Color(Color::Palette p)
{
  this->r = 0xFF & (p >> 16);
  this->g = 0xFF & (p >> 8);
  this->b = 0xFF & p;
  this->a = 0;
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

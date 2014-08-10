#include "ColoredPoint2D.h"

using ugen::Color;
using ugen::Point2D;
using ugen::ColoredPoint2D;

ColoredPoint2D::ColoredPoint2D(int32_t x, int32_t y, uint8_t r, uint8_t g, uint8_t b, uint8_t a)
	:Point2D(x, y), Color(r,g,b,a)
{
}

ColoredPoint2D::ColoredPoint2D(int32_t x, int32_t y, const Color& color)
	:Point2D(x, y), Color(color)
{
}

ColoredPoint2D::ColoredPoint2D(const Point2D& p, const Color& color)
	:Point2D(p), Color(color)
{
}

ColoredPoint2D::ColoredPoint2D(const ColoredPoint2D& cp)
	:Point2D(cp.getX(), cp.getY()), 
	Color(cp.getRed(), cp.getGreen(), cp.getBlue(), cp.getAlpha())
{
}

ColoredPoint2D::~ColoredPoint2D()
{
}

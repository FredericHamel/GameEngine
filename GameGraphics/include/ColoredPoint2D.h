#ifndef COLORED_POINT2D_H
#define COLORED_POINT2D_H

#include "Common.h"
#include "Color.h"
#include "Point2D.h"

class ColoredPoint2D: public Point2D, public Color
{
public:
	ColoredPoint2D(int32_t, int32_t, uint8_t=0, uint8_t=0, uint8_t=0, uint8_t=0);
	ColoredPoint2D(int32_t, int32_t, const Color&);
	ColoredPoint2D(const Point2D&, const Color&);
	ColoredPoint2D(const ColoredPoint2D&);
	virtual ~ColoredPoint2D();
};

#endif
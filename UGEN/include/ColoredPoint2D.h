#ifndef COLORED_POINT2D_H
#define COLORED_POINT2D_H

#include "Common.h"
#include "Color.h"
#include "Point2D.h"

class ugen::ColoredPoint2D: public ugen::Point2D, public ugen::Color
{
public:
  ColoredPoint2D(int32_t, int32_t, uint8_t=0, uint8_t=0, uint8_t=0, uint8_t=0);
  ColoredPoint2D(int32_t, int32_t, const ugen::Color&);
  ColoredPoint2D(const ugen::Point2D&, const ugen::Color&);
  ColoredPoint2D(const ugen::ColoredPoint2D&);
  virtual ~ColoredPoint2D();
};

#endif

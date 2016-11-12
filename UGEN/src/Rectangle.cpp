#include "Rectangle.h"

namespace ugen
{
  Rectangle::Rectangle(const Point2D& p, int w, int h)
  {
    this->inner_rect = {p.getX(), p.getY()};
    setWidth(w);
    setHeight(h);
  }

  Rectangle::Rectangle(int x, int y, int w, int h)
  {
    this->inner_rect = {.x=x, .y=y};
    setWidth(w);
    setHeight(h);
  }

  Rectangle::Rectangle(const Rectangle& rect)
    :Rectangle(rect.inner_rect.x, rect.inner_rect.y,
        rect.inner_rect.w, rect.inner_rect.h)
  {
  }

  void Rectangle::Move(int x, int y)
  {
    this->inner_rect.x += x;
    this->inner_rect.y += y;
  }

  void Rectangle::Offset(const Point2D& p)
  {
    this->inner_rect.x = p.getX();
    this->inner_rect.y = p.getY();
  }

  void Rectangle::Offset(int x,int y)
  {
    this->inner_rect.x = x;
    this->inner_rect.y = y;
  }

  void Rectangle::setWidth(int w)
  {
    this->inner_rect.w = w < 0 ? 0 : w;
  }

  void Rectangle::setHeight(int h)
  {
    this->inner_rect.h = h < 0 ? 0 : h;
  }

  bool Rectangle::Contain(const Point2D& p) const 
  {
    // may not work
    return abs(p.getX() - getX()) < getWidth() && abs(p.getY() - getHeight());
  }

  bool Rectangle::Contain(const Rectangle& rect) const
  {
    // may not work
    return abs(getX() - rect.getX()) < abs(getWidth() - rect.getWidth()) / 2 
      && abs(getY() - rect.getY()) < abs(getHeight() - rect.getHeight()) / 2;
  }

  bool Rectangle::operator==(const Rectangle& rect)
  {
    return this->getPosition() == rect.getPosition()
      && this->getWidth() == rect.getWidth()
      && this->getHeight() == rect.getHeight();
  }

  bool Rectangle::operator!=(const Rectangle& rect)
  {
    return !(*this == rect);
  }

  Point2D Rectangle::getPosition() const
  {
    return Point2D(this->inner_rect.x, this->inner_rect.y);
  }

  Rectangle::operator const SDL_Rect&() const
  {
    return this->inner_rect;
  }

  void Rectangle::serialize(std::ostream& out) const
  {
    out << "Rectangle(" << this->inner_rect.x << ", "
      << this->inner_rect.y << ", "
      << this->inner_rect.w << ", "
      << this->inner_rect.h << ")";
  }
}

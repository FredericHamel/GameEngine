#ifndef RECTANGE_H
#define RECTANGE_H

#include "Common.h"
#include "Point2D.h"
namespace ugen
{
  class Rectangle: public Serializable
  {
    SDL_Rect inner_rect;
    public:
    // x, y, w, h
    Rectangle(int=0,int=0,int=0,int=0);
    // Point2D(x=0, y=0), w, h
    Rectangle(const Point2D&, int,int);
    Rectangle(const Rectangle&);

    void Move(int, int);
    void Offset(const Point2D&);
    void Offset(int, int);

    Point2D getPosition() const;
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

    void setWidth(int);
    void setHeight(int);

    bool Contain(const Point2D&) const;
    bool Contain(const Rectangle&) const ;

    bool operator==(const Rectangle&);
    bool operator!=(const Rectangle&);

    explicit operator const SDL_Rect&() const;

    virtual void serialize(std::ostream&) const;
  };

  inline int Rectangle::getX() const
  {
    return this->inner_rect.x;
  }

  inline int Rectangle::getY() const
  {
    return this->inner_rect.y;
  }

  inline int Rectangle::getWidth() const
  {
    return this->inner_rect.w;
  }

  inline int Rectangle::getHeight() const
  {
    return this->inner_rect.h;
  }
}

#endif // RECTANGE_H

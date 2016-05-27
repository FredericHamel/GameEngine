#include "Rectangle.h"

using ugen::Rectangle;

Rectangle::Rectangle(Point2D p, int w, int h)
	:position_(p)
{
	setWidth(w);
	setHeight(h);
}

Rectangle::Rectangle(int x, int y, int w, int h)
	:position_(x, y)
{	
	setWidth(w);
	setHeight(h);
}

Rectangle::Rectangle(const Rectangle& rect)
	:position_(rect.getPosition())
{
	setWidth(rect.getWidth());
	setHeight(rect.getHeight());
}

void Rectangle::Move(int x, int y)
{
	position_.Move(x, y);
}

void Rectangle::Offset(const Point2D& p)
{
	this->position_.Offset(p.getX(), p.getY());
}

void Rectangle::Offset(int x,int y)
{
	position_.Offset(x,y);
}

void Rectangle::setWidth(int w)
{
	this->width_ = w < 0 ? 0 : w;
}

void Rectangle::setHeight(int h)
{
	this->height_ = h < 0 ? 0 : h;
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

void Rectangle::serialize(std::ostream& out) const
{
	out << "Position: " << this->getPosition() << std::endl
		<< "Width: " << this->getWidth() << std::endl
		<< "Height: " << this->getHeight() << std::endl;
}

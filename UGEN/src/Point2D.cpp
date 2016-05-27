#include "Point2D.h"
#include "cmath"

using ugen::Point2D;

Point2D::Point2D(int x, int y)
	:x_(x), y_(y)
{
}

Point2D::Point2D(const Point2D& p)
{
	setX(p.getX());
	setY(p.getY());
}

Point2D::~Point2D()
{
}

int Point2D::getX() const
{
	return this->x_;
}

int Point2D::getY() const
{
	return this->y_;
}

void Point2D::AddX(int dx)
{
	this->x_ += dx; 
}

void Point2D::AddY(int dy)
{
	this->y_ += dy; 
}

void Point2D::setX(int x)
{
	this->x_ = x;
}

void Point2D::setY(int y)
{
	this->y_ = y;
}

void Point2D::Offset(int x, int y)
{
	setX(x);
	setY(y);
}

void Point2D::Move(int dx, int dy)
{
	AddX(dx);
	AddY(dy);
}

Point2D& Point2D::operator=(Point2D& p)
{
	return p;
}

Point2D& Point2D::operator+=(const Point2D& p)
{
	AddX(p.getX());
	AddY(p.getY());
	return *this;
}

Point2D& Point2D::operator-=(const Point2D& p)
{
	this->x_ -= p.getX();
	this->y_ -= p.getY();
	return *this;
}

bool Point2D::operator==(const Point2D& p) const
{
	return this->getX() == p.getX() && this->getY() == p.getY();
}

bool Point2D::operator!=(const Point2D& p) const
{
	return !(*this == p);
}

Point2D Point2D::operator+(const Point2D& p) const
{
	return Point2D(this->getX() + p.getX(), this->getY() + p.getY());
}

Point2D Point2D::operator-(const Point2D& p) const
{
	return Point2D(this->getX() - p.getX(), this->getY() - p.getY());
}

void Point2D::serialize(std::ostream& out) const
{
	out << "(" << this->getX() << ", " << this->getY() << ")";
}

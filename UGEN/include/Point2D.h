#ifndef POINT2D_H
#define POINT2D_H

#include "Common.h"
#include "Serializable.h"


class ugen::Point2D : public ugen::Serializable
{
private:
	int x_, y_;
public:
	Point2D(int=0, int=0);
	Point2D(const ugen::Point2D&);
	virtual ~Point2D();

	int getX() const;
	int getY() const;

	void Move(int, int);
	void Offset(int, int);

	Point2D& operator=(ugen::Point2D&);
	Point2D& operator+=(const ugen::Point2D&);
	Point2D& operator-=(const ugen::Point2D&);

	bool operator==(const ugen::Point2D&) const;
	bool operator!=(const ugen::Point2D&) const;
	Point2D operator+(const ugen::Point2D&) const;
	Point2D operator-(const ugen::Point2D&) const;
	
	virtual void serialize(std::ostream&) const;
private:
	void AddX(int);
	void AddY(int);
	void setX(int);
	void setY(int);
};

#endif // POINT2D_H

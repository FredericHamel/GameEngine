#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>

class Point2D
{
private:
	int x_, y_;
public:
	Point2D(int=0, int=0);
	Point2D(const Point2D&);
	virtual ~Point2D();

	int getX() const;
	int getY() const;

	void Move(int, int);
	void Offset(int, int);

	Point2D& operator=(Point2D&);
	Point2D& operator+=(const Point2D&);
	Point2D& operator-=(const Point2D&);

	bool operator==(const Point2D&) const;
	bool operator!=(const Point2D&) const;
	Point2D operator+(const Point2D&) const;
	Point2D operator-(const Point2D&) const;
private:
	void AddX(int);
	void AddY(int);
	void setX(int);
	void setY(int);

	friend std::ostream& operator<<(std::ostream&, const Point2D&);
};

#endif // POINT2D_H
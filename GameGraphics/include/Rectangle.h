#ifndef RECTANGE_H
#define RECTANGE_H

#include "Common.h"
#include "Point2D.h"

class Rectangle
{
private:
	Point2D position_;
	int width_,
		height_;
public:
	// Point2D(x=0, y=0), w, h
	Rectangle(Point2D, int,int);
	
	// x, y, w, h
	Rectangle(int=0,int=0,int=0,int=0);
	Rectangle(const Rectangle&);

	void Move(int, int);
	void Offset(const Point2D&);
	void Offset(int, int);

	const Point2D& getPosition() const;
	int getX() const;
	int getY() const;
	int getWidth() const;
	int getHeight() const;

	bool Contain(const Point2D&) const;
	bool Contain(const Rectangle&) const ;

	bool operator==(const Rectangle&);
	bool operator!=(const Rectangle&);
private:
	void setWidth(int);
	void setHeight(int);

	friend std::ostream& operator<<(std::ostream&, const Rectangle&);
};

inline const Point2D& Rectangle::getPosition() const
{
	return this->position_;
}

inline int Rectangle::getX() const
{
	return getPosition().getX();
}

inline int Rectangle::getY() const
{
	return getPosition().getY();
}

inline int Rectangle::getWidth() const
{
	return this->width_;
}

inline int Rectangle::getHeight() const
{
	return this->height_;
}

#endif // RECTANGE_H
#ifndef RECTANGE_H
#define RECTANGE_H

#include "Common.h"
#include "Point2D.h"

class ugen::Rectangle
{
private:
	ugen::Point2D position_;
	int width_,
		height_;
public:
	// Point2D(x=0, y=0), w, h
	Rectangle(ugen::Point2D, int,int);
	
	// x, y, w, h
	Rectangle(int=0,int=0,int=0,int=0);
	Rectangle(const ugen::Rectangle&);

	void Move(int, int);
	void Offset(const Point2D&);
	void Offset(int, int);

	const ugen::Point2D& getPosition() const;
	int getX() const;
	int getY() const;
	int getWidth() const;
	int getHeight() const;
	
	void setWidth(int);
	void setHeight(int);

	bool Contain(const ugen::Point2D&) const;
	bool Contain(const ugen::Rectangle&) const ;

	bool operator==(const ugen::Rectangle&);
	bool operator!=(const ugen::Rectangle&);
private:

	friend std::ostream& operator<<(std::ostream&, const ugen::Rectangle&);
};

inline const ugen::Point2D& ugen::Rectangle::getPosition() const
{
	return this->position_;
}

inline int ugen::Rectangle::getX() const
{
	return getPosition().getX();
}

inline int ugen::Rectangle::getY() const
{
	return getPosition().getY();
}

inline int ugen::Rectangle::getWidth() const
{
	return this->width_;
}

inline int ugen::Rectangle::getHeight() const
{
	return this->height_;
}

#endif // RECTANGE_H

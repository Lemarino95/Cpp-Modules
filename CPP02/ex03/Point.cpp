#include "Point.hpp"


/*============================== O C F ============================*/

Point::Point() : x(0), y(0)
{}

Point::Point(const float abs, const float ord) : x(abs), y(ord)
{}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point	&Point::operator=(const Point &obj)
{
	if (this != &obj)
	{
		(Fixed)this->x = obj.x;
	}
	
	return *this;
}

Point::~Point() {}
/*=================================================================*/

float	Point::get_x_val() const { return this->x.toFloat(); }

float	Point::get_y_val() const { return this->y.toFloat(); }


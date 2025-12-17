#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/


class Point
{
private:
	Fixed const	x;
	Fixed const	y;

public:
	Point();
	Point(const float abs, const float ord);// abscissas and ordinates
	Point(const Point &obj);
	Point	&operator=(const Point &obj);
	~Point();

	//Funzione per prendere valore in x
	float	get_x_val() const;
	//Funzione per prendere valore in y
	float	get_y_val() const;
};


// Returns: True if the point is inside the triangle. False otherwise.
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
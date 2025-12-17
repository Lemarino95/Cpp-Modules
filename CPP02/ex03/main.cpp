#include "Point.hpp"

int main( void )
{
	/* Fixed a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed	c = a + b;
	std::cout << Y << a + b << NO_C << std::endl;
	std::cout << Y << c << NO_C << std::endl;
	std::cout << G << (c >= b) << NO_C << std::endl; */


	// Point *a = new Point(3, 8);
	// Point *b = new Point(3, 2);
	// Point *c = new Point(5, 5);
	// Point *point = new Point(8, 6);
	Point	a(3, 8);
	Point	b(3, 2);
	Point	c(5, 6);
	Point	point(4, 4);
	std::cout << BGR << "point->x = " << point.get_x_val() << NO_C << std::endl;
	std::cout << BGR << "point->y = " << point.get_y_val() << NO_C << std::endl;
	std::cout << BGY << "a->x = " << a.get_x_val() << NO_C << std::endl;
	std::cout << BGY << "a->y = " << a.get_y_val() << NO_C << std::endl;
	std::cout << BGG << "b->x = " << b.get_x_val() << NO_C << std::endl;
	std::cout << BGG << "b->y = " << b.get_y_val() << NO_C << std::endl;
	std::cout << BGB << "c->x = " << c.get_x_val() << NO_C << std::endl;
	std::cout << BGB << "c->y = " << c.get_y_val() << NO_C << std::endl;

	if (bsp(a, b, c, point))
		std::cout << M << "Inside" << NO_C << std::endl;
	else
		std::cout << M << "Not inside" << NO_C << std::endl;
	

	return 0;
}

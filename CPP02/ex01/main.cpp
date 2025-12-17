#include "Fixed.hpp"

int	main()
{
	std::cout << G;
	Fixed	a;
	std::cout << "\n" << B;
	Fixed	const b( 10 );
	std::cout << "\n" << Y;
	Fixed	const c( 42.42f );
	std::cout << "\n" << M;
	Fixed	const d( b );
	std::cout << "\n" << G;
	a = Fixed( 1234.4321f );
	std::cout << "\n" << NO_C;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
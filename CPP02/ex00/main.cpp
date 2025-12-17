#include "Fixed.hpp"

int	main(void)
{
	std::cout << G;
	Fixed a;

	std::cout << "\n" << B;
	Fixed b( a );

	std::cout << "\n" << Y;
	Fixed c;

	c = b;

	std::cout << "\n" << G;
	std::cout << "a -> " << a.getRawBits() << std::endl;
	std::cout << "\n" << B;
	std::cout << "b -> " << b.getRawBits() << std::endl;
	std::cout << "\n" << Y;
	std::cout << "c -> " << c.getRawBits() << std::endl;

	std::cout << "\n" << M;
	c.setRawBits(5);
	std::cout << "c -> " << c.getRawBits() << std::endl;
	
	std::cout << NO_C;
	return 0;
}
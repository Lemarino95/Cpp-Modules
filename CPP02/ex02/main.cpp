#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << G << "a) " << a << std::endl;
	std::cout << "++a) " << ++a << std::endl;
	std::cout << "a) " << a << std::endl;
	std::cout << "a++) " << a++ << std::endl;
	std::cout << "a) " << a << std::endl;
	std::cout << R << "--a) " << --a << std::endl;
	std::cout << "a) " << a << std::endl;
	std::cout << "a--) " << a-- << std::endl;
	std::cout << "a) " << a << std::endl;
	std::cout << NO_C << "b)" << b << std::endl;
	std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;

	Fixed c = a + b;
	std::cout << Y << "c = a + b =" << c << std::endl;
	Fixed d(3);
	std::cout << "d = " << d << std::endl;
	std::cout << "b * d = " << d * b << std::endl;
	std::cout << "b - d = " << d - b << std::endl;
	std::cout << "b / d = " << d / b << std::endl;
	std::cout <<  G << "c == b: " << (c == b) << std::endl;
	std::cout << "c == (d): " << (c == d) << std::endl;
	std::cout <<"c >= b: " << (c >= b) << std::endl;
	std::cout << "c > b: " << (c > b) << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c < b: " << (c < b) << std::endl;
	std::cout << "c != b: " << (c != b) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl;
	std::cout << NO_C << std::endl;

	return 0;
}

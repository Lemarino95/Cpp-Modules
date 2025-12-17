#include "Fixed.hpp"

// Constructor
Fixed::Fixed() : fp_nbr(0)
{
	std::cout << "Default Constructor called" << "\n";
}

// Copy constructor
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor called" << "\n";

	Fixed::operator=(other);
}

// Copy assignment operator
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << "\n";

	if (this != &other)
	{
		this->fp_nbr = other.getRawBits();
	}

	return *this;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << "\n";
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << "\n";

	return this->fp_nbr;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << "\n";

	this->fp_nbr = raw;
}

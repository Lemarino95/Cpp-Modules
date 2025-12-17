#include "Fixed.hpp"

Fixed::Fixed() : fxp_nbr(0)
{
	std::cout << "Default Constructor called" << "\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor called" << "\n";

	Fixed::operator=(other);
}


// Converts a const int number to the corresponding fixed-point value.
Fixed::Fixed(const int int_nbr)
{
	std::cout << "Int Constructor called" << "\n";

	fxp_nbr = int_nbr << fract_bits;
}


// Converts a const float number to the corresponding fixed-point value.
Fixed::Fixed(const float flp_nbr)
{
	std::cout << "Float Constructor called" << "\n";

	fxp_nbr = roundf(flp_nbr * (1 << fract_bits));
}


Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << "\n";

	if (this != &other)
	{
		this->fxp_nbr = other.getRawBits();
	}

	return *this;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << "\n";
}


int	Fixed::getRawBits() const
{
	return this->fxp_nbr;
}

void Fixed::setRawBits( int const raw )
{
	this->fxp_nbr = raw;
}

//Converts the fixed-point value to a floating-point value.
float	Fixed::toFloat() const
{
	float	flp_nbr;

	flp_nbr = (float)this->fxp_nbr / (1 << fract_bits);

	return flp_nbr;
}

//Converts the fixed-point value to a integer value.
int	Fixed::toInt() const
{
	int	i_nbr;

	i_nbr = fxp_nbr >> fract_bits;

	return i_nbr;
}

// An overload of the insertion («) operator.
std::ostream	&operator<<(std::ostream &stream, const Fixed &fix)
{
	stream << fix.toFloat();

	return stream;
}

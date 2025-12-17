#include "Fixed.hpp"

/*======================================= O C F =====================================*/
// Default Constructor
Fixed::Fixed() : fxp_nbr(0)
{}


// Copy constructor
Fixed::Fixed(const Fixed &obj)
{
	Fixed::operator=(obj);
}


// Converts a const int number to the corresponding fixed-point value.
Fixed::Fixed(const int int_nbr) : fxp_nbr(int_nbr << fract_bits)
{}


// Converts a const float number to the corresponding fixed-point value.
Fixed::Fixed(const float flp_nbr) : fxp_nbr(roundf(flp_nbr * (1 << fract_bits)))
{}

// Destructor
Fixed::~Fixed()
{}
/*===================================================================================*/


/*=============================== Operator overloads ================================*/

/* ---------------- Comparison Operators ---------------- */

Fixed	&Fixed::operator=(const Fixed &obj)
{
	if (this != &obj)
	{
		this->fxp_nbr = obj.getRawBits();
	}

	return *this;
}

bool Fixed::operator>(const Fixed &obj) const
{
	if (this->fxp_nbr > obj.fxp_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed &obj) const
{
	if (this->fxp_nbr < obj.fxp_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed &obj) const
{
	if (this->fxp_nbr >= obj.fxp_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed &obj) const
{
	if (this->fxp_nbr <= obj.fxp_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed &obj) const
{
	if (this->fxp_nbr == obj.fxp_nbr)
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed &obj) const
{
	if (this->fxp_nbr != obj.fxp_nbr)
		return true;
	else
		return false;
}
/*----------------------------------------------------------*/


/*----------------- Arithmetic Operators -------------------*/

Fixed	Fixed::operator+(const Fixed &obj) const
{
	Fixed	res;

	res = this->toFloat() + obj.toFloat();

	return res;
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
	Fixed	res;

	res = this->toFloat() - obj.toFloat();

	return res;
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
	Fixed	res;

	res = this->toFloat() * obj.toFloat();

	return res;
}
 
Fixed	Fixed::operator/(const Fixed &obj) const
{
	Fixed	res;

	res = this->toFloat() / obj.toFloat();

	return res;
}
/*----------------------------------------------------------*/


/*----------------- Increment Operators --------------------*/

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->fxp_nbr += 1;
	return temp;
}

Fixed	&Fixed::operator++(void)
{
	this->fxp_nbr += 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->fxp_nbr -= 1;
	return temp;
}

Fixed	&Fixed::operator--(void)
{
	this->fxp_nbr -= 1;
	return *this;
}
/*----------------------------------------------------------*/


std::ostream	&operator<<(std::ostream &stream, const Fixed &fix)
{
	stream << fix.toFloat();

	return stream;
}

/*===================================================================================*/

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

	i_nbr = getRawBits() >> fract_bits;

	return i_nbr;
}


Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	return n1.getRawBits() < n2.getRawBits() ? n1 : n2;
}

const Fixed	&Fixed::min(const Fixed &n1, const Fixed &n2)
{
	return n1.getRawBits() < n2.getRawBits() ? n1 : n2;
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	return n1.getRawBits() > n2.getRawBits() ? n1 : n2;
}

const Fixed	&Fixed::max(const Fixed &n1, const Fixed &n2)
{
	return n1.getRawBits() > n2.getRawBits() ? n1 : n2;
}

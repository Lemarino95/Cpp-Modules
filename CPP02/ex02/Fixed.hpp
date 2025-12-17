#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

class Fixed
{
private:
	int					fxp_nbr;// fixed-point number value.
	static const int	fract_bits = 8;// number of fractional bits.

public:
	Fixed();// Default constructor.
	Fixed(const Fixed &other);// Copy constructor.
	Fixed(const int int_nbr);// Int constructor.
	Fixed(const float flp_nbr);// Float constructor.
	~Fixed();// Destructor

	/* ---------------- Operators overloading ---------------- */
	Fixed &operator=(const Fixed &other);// copy assignment operator.

	/* Comparison operators */
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	/* Arithmetic operators */
	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	/* Increment/Decrement operators */
	/*smallest representable vale ε: 1.0/(1<<fract_bits) = 2^(-8) = 1/(2^8) = 1/256 ≈ 0.00390625*/
	Fixed	operator++(int);//x++
	Fixed	&operator++(void);//++x
	Fixed	operator--(int);
	Fixed	&operator--();

	/*----------------------------------------------------------*/

	int				getRawBits() const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;

	//Takes two references to fixed-point numbers as
	//parameters, and returns a reference to the smallest one
	static Fixed	&min(Fixed &n1, Fixed &n2);
	static const Fixed	&min(const Fixed &n1, const Fixed &n2);
	//Takes two references to fixed-point numbers as
	//parameters, and returns a reference to the greatest one
	static Fixed	&max(Fixed &n1, Fixed &n2);
	static const Fixed	&max(const Fixed &n1, const Fixed &n2);

};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fix);

#endif

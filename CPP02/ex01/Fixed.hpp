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
	int					fxp_nbr;
	static const int	fract_bits = 8;

	public:
	Fixed();// Default constructor.
	Fixed(const Fixed &other);// Copy constructor.
	Fixed(const int int_nbr);// Int constructor.
	Fixed(const float flp_nbr);// Float constructor.
	Fixed &operator=(const Fixed &other);// copy assignment operator.
	~Fixed();// Destructor

	int				getRawBits() const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream	&operator<<(std::ostream &stream, const Fixed &fix);

#endif

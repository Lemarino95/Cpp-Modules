#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

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

class	Weapon
{
	private:
	std::string	type;

	public:
	Weapon(std::string wp_type);

	void	setType(std::string	newvalue);
	const std::string& getType();//returns a constant reference to type.
};

#endif

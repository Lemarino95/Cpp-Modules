#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

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

class	HumanB
{
	private:
	std::string	name;
	Weapon		*weaponB;

	public:
	HumanB(std::string str);

	void	attack();

	void	setWeapon(Weapon arm);

	~HumanB();
};

#endif 
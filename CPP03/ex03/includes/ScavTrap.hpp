#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"

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
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string str);
	~ScavTrap();

	void	attack(const std::string &target);

	void guardGate();
};



#endif
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class	ClapTrap
{
protected:

	std::string	name;
	int			max_hp;// Maximum Hit points.
	int			h_p;//    Current Hit points.
	int			e_p;//    Energy points.
	int			a_d;//    Attack damage.

public:
	
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &obj);
	ClapTrap	&operator=(const ClapTrap &obj);
	~ClapTrap();

	void	attack(const std::string &target);// -1 e_p
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);// -1 e_p
	std::string	getName() const;
	void	setName(std::string str);
	int		getHealth() const;
	void	setHealth(int value);
	int		getEnergy() const;
	void	setEnergy(int sign, int value);
	int		getAttack() const;
	void	setAttack(int value);
};

#endif
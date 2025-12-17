#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "A ScavTrap was created" << "\n";
}

ScavTrap::ScavTrap(std::string str)
{
	std::cout << str << " will bravely oppose intruders" << "\n";
	setName(str);
	this->max_hp = 100;
	setHealth(100);
	setEnergy('+', 50);
	setAttack(20);
}

ScavTrap::~ScavTrap()
{
	std::cout << BGR << getName() << " is gone.. May it rest in peace." << NO_C << "\n";
}

void	ScavTrap::attack(const std::string &target)
{
	if (getHealth() == 0)
	{
		std::cout << R << getName() << " is dead." << NO_C << "\n";
	}
	if (getEnergy() > 0 && getHealth() > 0)
	{
		setEnergy('-', 1);
		std::cout << Y << getName() << " is fighting " << target << "\n";
		std::cout << getAttack() << " damage dealt." << NO_C << "\n";
	}
	if (getEnergy() == 0)
	{
		std::cout << Y << getName() << " is out of energy." << NO_C << "\n";
	}	
}

void	ScavTrap::guardGate()
{
	std::cout << M << getName() << " is in Gatekeeper mode" << NO_C << "\n";
}

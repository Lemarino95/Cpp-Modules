#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "A FragTrap was created" << "\n";
}

FragTrap::FragTrap(std::string str)
{
	std::cout << str << " is ready to party" << "\n";
	setName(str);
	max_hp = 100;
	setHealth(100);
	setEnergy('+', 100);
	setAttack(30);
}

FragTrap::FragTrap(const FragTrap &obj) { FragTrap::operator=(obj); }

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->max_hp = obj.max_hp;
		this->h_p = obj.h_p;
		this->e_p = obj.e_p;
		this->a_d = obj.a_d;
	}

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << BGR << getName() << " will give no more highfives..." << NO_C << "\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (getHealth() == 0)
	{
		std::cout << R << getName() << " is dead." << NO_C << "\n";
	}
	if (getEnergy() > 0 && getHealth() > 0)
	{
		setEnergy('-', 1);
		std::cout << Y << getName() << " highfives " << target << " in the face" "\n";
		std::cout << getAttack() << " damage dealt." << NO_C << "\n";
	}
	if (getEnergy() == 0)
	{
		std::cout << Y << getName() << " is out of energy." << NO_C << "\n";
	}	
}

void	FragTrap::highFivesGuys()
{
	std::cout << G << "GIVE ME AN HIGHFIVE! :D" << "\n";

	std::cout << "No? that's okay..." << NO_C << "\n";
}

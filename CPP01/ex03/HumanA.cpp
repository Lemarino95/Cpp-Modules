#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &arm) : name(str), weaponA(arm)
{}


void	HumanA::attack()
{
	std::cout << LC << name << " attacks with their " << weaponA.getType() << NO_C << "\n";
}

HumanA::~HumanA()
{
	std::cout << R << name << " died in battle." << NO_C << "\n";
}

#include "HumanB.hpp"

HumanB::HumanB(std::string	str)
{
	name = str;
	weaponB = NULL;
}

void	HumanB::setWeapon(Weapon arm)
{
	weaponB = &arm;
}

void	HumanB::attack()
{
	std::string	curr_weapon;

	if (!weaponB)
		curr_weapon = "cartoni in faccia";
	else
		curr_weapon = weaponB->getType();
	std::cout << G << name << " attacks with their " << curr_weapon << NO_C << "\n";
}

HumanB::~HumanB()
{
	std::cout << R << name << " died in battle." << NO_C << "\n";
}

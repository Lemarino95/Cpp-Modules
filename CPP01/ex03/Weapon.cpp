#include "Weapon.hpp"

Weapon::Weapon(std::string wp_type)
{
	type = wp_type;
}

void	Weapon::setType(std::string	newvalue)
{
	type = newvalue;
}

const std::string& Weapon::getType()
{
	return type;
}

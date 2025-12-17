#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{ std::cout << "A DiamondTrap was created" << "\n"; }

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << str << " questions it's existence" << "\n";
	this->name = str;
	FragTrap::h_p = 100;
	ScavTrap::e_p = 50;
	FragTrap::a_d = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) { DiamondTrap::operator=(obj); }

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->h_p = obj.h_p;
		this->e_p = obj.e_p;
		this->a_d = obj.a_d;
	}

	return *this;
}

DiamondTrap::~DiamondTrap()
{ std::cout << BGR << name << " doesn't think (anymore), therefore isn't (anymore)" << NO_C << "\n"; }

void	DiamondTrap::attack(const std::string &target)
{ ScavTrap::attack(target); }

void	DiamondTrap::whoAmI()
{ std::cout << BGB << "DiamondTrap name: " << this->name << NO_C << "\n";
	std::cout << BGB << "ClapTrap name: "  << ClapTrap::name << NO_C << "\n"; }

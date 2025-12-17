#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	cp1;
	ScavTrap	cp2("Josh");
	ClapTrap	cp3("Siegfrido");

	cp2.guardGate();
	cp2.attack(cp3.getName());
	std::cout << B << cp2.getName() << "'s remaining Energy: " << cp2.getEnergy() << NO_C << "\n";
	cp3.takeDamage(cp2.getAttack());
	std::cout << LC << cp3.getName() << "'s remaining Health: " << cp3.getHealth() << NO_C << "\n";

	cp2.beRepaired(1);
	std::cout << B << cp2.getName() << "'s remaining Energy: " << cp2.getEnergy() << NO_C << "\n";
	std::cout << B << cp2.getName() << "'s remaining Health: " << cp2.getHealth() << NO_C << "\n";

	cp3.attack(cp2.getName());
	cp2.takeDamage(cp3.getAttack());
}

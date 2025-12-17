#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	cp1;
	ClapTrap	cp2("Josh");
	ClapTrap	cp3("Siegfrido");

	while (cp3.getHealth() > 0)
	{
		cp2.attack(cp3.getName());
		std::cout << B << cp2.getName() << "'s remaining Energy: " << cp2.getEnergy() << NO_C << "\n";
		cp3.takeDamage(cp2.getAttack());
		std::cout << LC << cp3.getName() << "'s remaining Health: " << cp3.getHealth() << NO_C << "\n";
	}
	cp3.beRepaired(1);
	std::cout << LC << cp3.getName() << "'s remaining Energy: " << cp3.getEnergy() << NO_C << "\n";
	std::cout << LC << cp3.getName() << "'s remaining Health: " << cp3.getHealth() << NO_C << "\n";

	cp3.attack(cp2.getName());
	cp2.takeDamage(cp3.getAttack());
	ClapTrap	cp4("Romeo");
	std::cout << M << cp4.getName() << "'s remaining Health: " << cp4.getHealth() << NO_C << "\n";
	cp4.beRepaired(14);
	std::cout << M << cp4.getName() << "'s remaining Health: " << cp4.getHealth() << NO_C << "\n";
}

#include "./includes/DiamondTrap.hpp"

int	main()
{
	ClapTrap	cp1;
	FragTrap	cp2("Josh");
	ScavTrap	cp3("Siegfrido");

	cp2.highFivesGuys();
	cp2.attack(cp3.getName());
	std::cout << B << cp2.getName() << "'s remaining Energy: " << cp2.getEnergy() << NO_C << "\n";
	cp3.takeDamage(cp2.getAttack());
	std::cout << LC << cp3.getName() << "'s remaining Health: " << cp3.getHealth() << NO_C << "\n";

	cp2.beRepaired(1);
	std::cout << B << cp2.getName() << "'s remaining Energy: " << cp2.getEnergy() << NO_C << "\n";
	std::cout << B << cp2.getName() << "'s remaining Health: " << cp2.getHealth() << NO_C << "\n";

	cp3.guardGate();
	cp3.attack(cp2.getName());
	cp2.takeDamage(cp3.getAttack());
	std::cout << LC << cp2.getName() << "'s remaining Health: " << cp2.getHealth() << NO_C << "\n";

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~\n";

	DiamondTrap	cp41;
	DiamondTrap	cp4("Jeremy");

	cp4.guardGate();
	cp4.attack(cp41.getName());
	cp4.beRepaired(3);
	cp3.attack(cp4.getName());
	cp4.takeDamage(cp3.getAttack());
	cp4.beRepaired(3);
	cp4.highFivesGuys();
	cp4.whoAmI();

}

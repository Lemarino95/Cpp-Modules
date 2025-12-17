#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon	club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon	club = Weapon("flamethrower");
		HumanB Stevem("Stevem");
		Stevem.attack();
		Stevem.setWeapon(club);
		Stevem.attack();
	}

	return 0;
}

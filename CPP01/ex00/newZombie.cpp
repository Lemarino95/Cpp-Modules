#include "Zombie.hpp"

//This function creates a zombie, names it,
// and returns it so you can use it outside of the function scope.
Zombie*	newZombie(std::string name)
{
	Zombie *nw_zombie = new Zombie();

	std::cout << G << "This zombie has spawned on the heap." << "\n" << NO_C;
	nw_zombie->nameZombie(name);
	nw_zombie->announce();

	return (nw_zombie);
}

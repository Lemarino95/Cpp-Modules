#include "Zombie.hpp"

//This function creates a zombie, names it, 
// and makes it announce itself.
void	randomChump( std::string name )
{
	Zombie	chump;

	std::cout << LC << "This zombie has spawned on the stack." << "\n" << NO_C;
	chump.nameZombie(name);
	chump.announce();
}

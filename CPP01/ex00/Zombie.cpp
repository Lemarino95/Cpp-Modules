#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << Y << "The zombie is spawning" << NO_C << "\n";
	zombiename = "";
}

void	Zombie::nameZombie(std::string name)
{
	zombiename = name;
}

void	Zombie::announce()
{
	std::cout << zombiename << ": " << BGR << "BraiiiiiiinnnzzzZ..." << NO_C << "\n";
}

Zombie::~Zombie()
{
	std::cout << R << "The zombie \"" << zombiename << "\"  was set on fire." << NO_C << "\n";
}

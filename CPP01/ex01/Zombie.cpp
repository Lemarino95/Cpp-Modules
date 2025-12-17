#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << Y << "The zombies are spawning" << NO_C << "\n";
	zombiename = "";
}

void	Zombie::nameZombie(std::string name, int N)
{
	std::string	num;

	std::stringstream ss;
	ss << N;
	ss >> num;
	zombiename = name + num;
}

void	Zombie::announce()
{
	std::cout << zombiename << ": " << BGR << "BraiiiiiiinnnzzzZ..." << NO_C << "\n";
}

Zombie::~Zombie()
{
	std::cout << R << "The zombie \"" << zombiename << "\"  was set on fire." << NO_C << "\n";
}

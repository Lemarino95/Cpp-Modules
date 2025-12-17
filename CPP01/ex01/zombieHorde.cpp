#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	nzombies;
	Zombie	*horde = new Zombie[N];

	nzombies = 0;
	while (nzombies < N)
	{
		horde[nzombies].nameZombie(name, nzombies + 1);
		std::cout << Y << "Zombie number " << nzombies + 1 << " has spawned" << NO_C << "\n";
		nzombies++;
	}

	return horde;
}

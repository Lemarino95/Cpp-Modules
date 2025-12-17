#include "Zombie.hpp"

bool	parse_nzombies(std::string strnum)
{
	int	l = strnum.length();
	for (int i = 0; i < l; i++)
	{
		while (strnum[i] == ' ')
			i++;
		if (!isdigit(strnum[i]))
		{
			std::cerr << R << "That's not a valid number"<< NO_C << "\n";
			return 0;
		}
	}
	return 1;
}

int	main()
{
	Zombie		*horde;
	
	std::string	strnum;
	std::cout << G << "How many zombies are spawining?" << NO_C << "\n";
	if (!getline(std::cin, strnum) || !parse_nzombies(strnum))
	{
		std::cerr << R << "There shall be no outbreak today." << NO_C << "\n";
		return 1;
	}
	int N = std::atoi(strnum.c_str());

	std::string	strname;
	std::cout << G << "Name these zombies:" << NO_C << "\n";
	if (!getline(std::cin, strname))
	{
		std::cerr << R << "If they had feelings, they would be very sad..." << "\n";
		return 1;
	}
	horde = zombieHorde(N, strname);
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}

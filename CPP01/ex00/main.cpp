#include "Zombie.hpp"

int	main()
{
	std::string	str1;
	Zombie		*nwZombie;
	std::cout << G << "Name this zombie:" << NO_C << "\n";
	if (!getline(std::cin, str1))
	{
		std::cerr << R << "If it had feelings, it would be very sad..." << NO_C << "\n";
		return 1;
	}
	nwZombie = newZombie(str1);
	delete nwZombie;

	std::string	str2;
	std::cout << LC << "Name the next one:" << NO_C << "\n";
	if (!getline(std::cin, str2))
	{
		std::cerr << R << "If it had feelings, it would be very sad..." << NO_C << "\n";
		return 2;
	}
	randomChump(str2);

	return 0;
}

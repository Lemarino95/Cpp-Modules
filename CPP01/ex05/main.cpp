#include "Harl.hpp"

int	main()
{
	Harl	btch;

	std::cout << G  << "Select one of the following levels:" << "\n";
	std::cout << LC << "• DEBUG" << "\n";
	std::cout << M  << "• INFO" << "\n";
	std::cout << Y  << "• WARNING" << "\n";
	std::cout << R  << "• ERROR" << NO_C << "\n";

	std::string	level;
	if (!getline(std::cin, level))
	{
		std::cout << LG << "You left Harl speechless!" << NO_C << "\n";
		return 1;
	}
	btch.complain(level);
	return 0;
}

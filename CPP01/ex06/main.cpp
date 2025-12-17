#include "Harl.hpp"

int	main(int ac, char *av[])
{
	if ( ac < 2)
	{
		std::cout << G  << "Rerun with one of the following arguments:" << "\n";
		std::cout << LC << "• DEBUG" << "\n";
		std::cout << M  << "• INFO" << "\n";
		std::cout << Y  << "• WARNING" << "\n";
		std::cout << R  << "• ERROR" << NO_C << "\n";
		return 1;
	}

	Harl	btch;
	std::string	level = av[1];

	btch.complain(level);
	return 0;
}

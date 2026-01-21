#include "ScalarConverter.hpp"

int	main(int ac, char* av[])
{
	if (ac < 2)
	{
		std::cout << R << "argument required" << NO_C << "\n";
		return 1;
	}
	if (ac > 2)
	{
		std::cout << R << "too many arguments" << NO_C << "\n";
		return 2;
	}

	ScalarConverter::convert(av[1]);
}

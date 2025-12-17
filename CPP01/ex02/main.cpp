#include <iostream>

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int	main()
{
	//		Initialization
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	//		Print addresses
	std::cout << G << &string << NO_C << "\n";
	std::cout << LC << &stringPTR << NO_C << "\n";
	std::cout << M << &stringREF << NO_C << "\n";

	std::cout << "\n";

	//		Print values
	std::cout << G << string << NO_C << "\n";
	std::cout << LC << *stringPTR << NO_C << "\n";
	std::cout << M << stringREF << NO_C << "\n";

	return 0;
}

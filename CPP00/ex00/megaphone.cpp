#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1){
		std::string Noise = "* LOUD AND UNBEARABLE BACKGROUND NOISE *";
		std::cout << "\e[41;1m" << Noise << "\e[0m" << "\n";
	}
	else{
		int i = 1;
		while (i < ac)
		{
			std::string Message(av[i]);
			std::string::iterator itr;
			for (itr = Message.begin(); itr!=Message.end(); ++itr)
				*itr = toupper(*itr);
			std::cout << "\e[1;32m" << Message << "\e[0m" << "\n"; 
			i++;
		}
	}

	return 0;
}

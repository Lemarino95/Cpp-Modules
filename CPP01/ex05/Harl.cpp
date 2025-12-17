#include "Harl.hpp"

Harl::Harl()
{}

void	Harl::debug()
{
	std::cout << LC << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << "\n";
	std::cout << "I really do!";
	std::cout << NO_C << "\n";
}

void	Harl::info()
{
	std::cout << M << "I cannot believe adding extra bacon costs more money." << "\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << NO_C << "\n";
}

void	Harl::warning()
{
	std::cout << Y << "I think I deserve to have some extra bacon for free." << "\n";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.";
	std::cout << NO_C << "\n";
}

void	Harl::error()
{
	std::cout << R << "This is unacceptable! I want to speak to the manager now.";
	std::cout << NO_C << "\n";
}

static std::string	*assemble_menu()
{
	std::string	*lvls_menu = new std::string[4];

	lvls_menu[0] = "DEBUG";
	lvls_menu[1] = "INFO";
	lvls_menu[2] = "WARNING";
	lvls_menu[3] = "ERROR";
	return (lvls_menu);
}

void	Harl::complain(std::string level)
{
	Harl	harl;
	void	(Harl::*fptr[4])();

	fptr[0] = &Harl::debug;
	fptr[1] = &Harl::info;
	fptr[2] = &Harl::warning;
	fptr[3] = &Harl::error;

	std::string	*lvls_menu;
	lvls_menu = assemble_menu();

	for (int i = 0; i <= 4; i++)
	{
		if (i == 4)
			std::cout << LG << "You left Harl speechless!" << NO_C << "\n";
		else if (level == lvls_menu[i])
		{
			(harl.*fptr[i])();
			delete[] lvls_menu;
			return ;
		}
	}
	delete[] lvls_menu;
}

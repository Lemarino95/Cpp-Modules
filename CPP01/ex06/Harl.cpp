#include "Harl.hpp"

Harl::Harl()
{}

void	Harl::debug()
{
	std::cout << "\033[96;1m" << "[DEBUG]" << NO_C << "\n";
	std::cout << LC << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << "\n";
	std::cout << "I really do!";
	std::cout << NO_C << "\n";
	std::cout << "\n";
}

void	Harl::info()
{
	std::cout << "\033[95;1m" << "[INFO]" << NO_C << "\n";
	std::cout << M << "I cannot believe adding extra bacon costs more money." << "\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn't be asking for more!";
	std::cout << NO_C << "\n";
	std::cout << "\n";
}

void	Harl::warning()
{
	std::cout << "\033[33;1m" << "[WARNING]" << NO_C << "\n";
	std::cout << Y << "I think I deserve to have some extra bacon for free." << "\n";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.";
	std::cout << NO_C << "\n";
	std::cout << "\n";
}

void	Harl::error()
{
	std::cout << "\033[31;1m" << "[ERROR]" << NO_C << "\n";
	std::cout << R << "This is unacceptable! I want to speak to the manager now.";
	std::cout << NO_C << "\n";
	std::cout << "\n";
}

static void	select_options(Harl& harl, void (Harl::*fptr[4])(), int i)
{
	switch (i)
	{
		case 0:
			(harl.*fptr[0])();
		case 1:
			(harl.*fptr[1])();
		case 2:
			(harl.*fptr[2])();
		case 3:
		{
			(harl.*fptr[3])();
			break;
		}
		case 4:
			std::cout << LG << "You left Harl speechless!" << NO_C << "\n";
	}
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

	int i = 0;
	while (i < 4 && level != lvls_menu[i])
	{
		i++;
	}
	select_options(harl, fptr, i);
	delete[] lvls_menu;
}

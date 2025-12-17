#include "Contacts.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	darkest_secret = "";
	phone_n = "";
}

static std::string	abbreviate(std::string s)
{
	std::string	dot = ".";
	if (s.length() >= 10)
	{
		s = s.substr(0, 9);
		s = s + dot;
	}
	return s;
}

bool	Contact::typeinfo()
{
	std::cout << LC << "Enter first_name:\n" << NO_C;
	if (!getline(std::cin, first_name))
		return 0;

	std::cout << LC << "Enter last_name:\n" << NO_C;
	if (!getline(std::cin, last_name))
		return 0;

	std::cout << LC << "Enter nickname:\n" << NO_C;
	if (!getline(std::cin, nickname))
		return 0;

	std::cout << LC << "Tell me their darkest_secret ehehe:\n" << NO_C;
	if (!getline(std::cin, darkest_secret))
		return 0;

	std::cout << LC << "Finally, their phone number:\n" << NO_C;
	if (!getline(std::cin, phone_n))
		return 0;

	return 1;
}

void	Contact::getinfo_lined(int index)
{
	std::cout << M << std::right << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << abbreviate(first_name) << "|";
	std::cout << std::setw(10) << abbreviate(last_name) << "|";
	std::cout << std::setw(10) << abbreviate(nickname) << "|" << "\n" << NO_C;
}

void	Contact::getinfo_columned()
{
	if (first_name == "" && last_name == "" && nickname == "" && \
							darkest_secret == "" && phone_n == "")
	{
		std::cout << LC << "No voice at the requested index yet.\n" << NO_C;
		return ;
	}
	std::cout << M << first_name << "\n";
	std::cout << last_name << "\n";
	std::cout << nickname << "\n";
	std::cout << darkest_secret << "\n";
	std::cout << phone_n << "\n" << NO_C;
}

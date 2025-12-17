#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << LC << "What do you wish to do?" << NO_C << "\n";
		if (!std::getline(std::cin, command))
			{
				std::cerr << R << "NULL input, exiting program\n" << NO_C;
				return 1;
			}
		if (command == "ADD")
		{
			if (!phonebook.add())
			{
				std::cerr << R << "NULL input, exiting program\n" << NO_C;
				return 1;
			}
		}
		else if (command == "SEARCH")
		{
			if (!phonebook.search())
			{
				std::cerr << R << "NULL input, exiting program\n" << NO_C;
				return 1;
			}
		}
		else if (command == "EXIT"){
			break;
		}
		else{
			std::cout << R << "Invalid input: type ADD, SEARCH or EXIT" << NO_C << "\n";
		}
	}
}


#include "PhoneBook.hpp"
#include "Contacts.hpp"

PhoneBook::PhoneBook() { n_contcs = 0; }

bool	PhoneBook::add()
{
	if (n_contcs < 8)
	{
		if(!contacts[n_contcs].typeinfo())
			return 0;
		n_contcs++;
	}
	else
	{
		for (int i = 0; i < n_contcs - 1; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		if (!contacts[n_contcs - 1].typeinfo())
			return 0;
	}
	return 1;
}

bool	PhoneBook::search()
{
	std::string	index_string;
	int			index;

	for (int i = 0; i < n_contcs; i++)
	{
		contacts[i].getinfo_lined(i);
	}
	std::cout << LC << "Type the index of the contact you are looking for.\n" << NO_C;
	if (!getline(std::cin, index_string))
		return 0;
	std::stringstream tmp (index_string);
	tmp >> index;
	if (index > 8 || index < 1)
	{
		std::cout << LC << "Invalid index. It must be comprised between 1 and 8\n";
		return 1;
	}
	else if ((index - 1) > n_contcs)
	{
		std::cout << LC << "No voice at the requested index yet.\n";
		return 1;
	}
	else
	{
		contacts[index - 1].getinfo_columned();
			return 1;
	}
	std::cout << LC << "This contact is not in the phonebook,\n";
	std::cout << "Use the command \"ADD\" to add it.\n\n" << NO_C;
	return 1;
}
                                                                                                                                                                                           
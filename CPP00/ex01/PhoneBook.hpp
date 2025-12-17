#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>//getline()   
#include <sstream>//stringstream
#include "Contacts.hpp"

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[39m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class PhoneBook
{
	private:
	Contact	contacts[9];
	int		n_contcs;//		Number of contacts currently saved.

	public:
	PhoneBook();//			Costructor.
	bool	add();//		Creates a new contact.
	bool	search();//		Looks for a contact in the phonebook.
};

#endif

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <iomanip>//setw()
#include <cstring>//strncpy
#include <string>//getline()

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

class Contact
{
	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_n;

	public:
	Contact();
	bool		typeinfo();
	void		getinfo_lined(int index);
	void		getinfo_columned();
};

#endif

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class	Animal
{
protected:
	std::string	type;

public:
	Animal();
	Animal(std::string str);
	Animal(const Animal &obj);
	Animal	&operator=(const Animal &obj);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
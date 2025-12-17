#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

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

class	A_Animal
{
protected:
	std::string	type;
	A_Animal();

public:
	A_Animal(std::string str);
	A_Animal(const A_Animal &obj);
	A_Animal	&operator=(const A_Animal &obj);
	virtual ~A_Animal();

	virtual void makeSound() const;
	std::string getType() const;
};

#endif
#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

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

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &obj);
	~Serializer();
public:
	Serializer	&operator=(const Serializer &obj);
	// Takes a pointer and converts it to the unsigned integer type uintptr_t
	static uintptr_t	serialize(Data* ptr);

	// Takes an unsigned integer parameter and converts it to a pointer to Data
	static Data*		deserialize(uintptr_t raw);
};


#endif

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <typeinfo>

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define BR "\033[91m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[35m"
# define BM "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class NoMatchException : public std::exception
{
	virtual const char*	what() const throw()
	{ return ("No match found"); }
};

template <typename T>
void	easyfind(T arr, int val)
{
	typename T::iterator it = arr.begin();

	while ( it != arr.end())
	{
		if (*it == val)
		{
			std::cout << *it << "\n";
			return ;
		}
		it++;
	}

	throw NoMatchException();
}

#endif

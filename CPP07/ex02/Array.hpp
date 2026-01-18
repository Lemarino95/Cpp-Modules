#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
# include <cstdlib>
# include <ctime>

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

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T*		_elem;

public:
	Array();

	// Creates an array of n elements
	Array(unsigned int n);

	Array	&operator=(const Array &obj);

	Array(const Array &obj);

	~Array();

	// Returns the number of elements in the array
	unsigned int	size() const;

	// overload di [];// If its index is out of bounds, an std::exception is thrown
	T	&operator[](unsigned int idx);

	const T	&operator[](unsigned int idx) const;
};

#include "Array.tpp"

#endif

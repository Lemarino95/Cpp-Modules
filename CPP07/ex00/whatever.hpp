#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

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

// Swaps the values of two given parameters
template <typename T>
void	swap(T &p1, T &p2)
{
	T	temp = p1;
	p1 = p2;
	p2 = temp;
}

// Compares the two values passed as parameters and returns the smallest one.
// If they are equal, it returns the second one
template <typename T>
const T	min(T p1, T p2)
{ return (p1 < p2) ? p1 : p2; }

// Compares the two values passed as parameters and returns the greatest one.
// If they are equal, it returns the second one.
template <typename T>
const T	max(T p1, T p2)
{ return (p1 >= p2) ? p1 : p2; }

#endif

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <math.h>
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


class Span
{
private:
	std::vector<int>	_arr;
	unsigned int		_size;

public:
	Span();
	Span(unsigned int N);
	Span	&operator=(Span &obj);
	Span(Span &obj);
	~Span();

class FullSpan : public std::exception
{
	virtual const char*	what() const throw()
	{ return ("Can't add more numbers"); }
};

class NoSpan : public std::exception
{
	virtual const char*	what() const throw()
	{ return ("No span could be found"); }
};

// Adds a single number to the Span array
//  throws FullSpan if the array already has _size elements
	void	addNumber(int n);

// Adds multiple numbers to your Span in a single call
	void	addSequence(std::vector<int> seq);

// Finds the shortest span between consecutive numbers in the class array
//  throws NoSpan if the array has 0 or 1 elements
	unsigned int	shortestSpan();

// Finds the longest span between consecutive numbers in the class array
//  throws NoSpan if the array has 0 or 1 elements
	unsigned int	longestSpan();

	int	getSize();
	int	getElem(int idx);
};

#endif

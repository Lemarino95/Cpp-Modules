#ifndef MUTANT_HPP
# define MUTANT_HPP

#include <iostream>
#include <deque>
#include <stack>

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
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::deque<T>::iterator	iterator;
	typedef typename std::deque<T>::reverse_iterator	reverse_iterator;

	typename std::deque<T>::iterator	begin()
	{ return this->c.begin(); }

	typename std::deque<T>::iterator	end()
	{ return this->c.end(); }

	typename std::deque<T>::reverse_iterator	rbegin()
	{ return this->c.rbegin(); }

	typename std::deque<T>::reverse_iterator	rend()
	{ return this->c.rend(); }

/*                             C++11
	typedef const typename std::deque<T>::const_iterator	const_iterator;

	typename std::deque<T>::const_iterator	cbegin() const
	{ return this->c.cbegin(); }

	typename std::deque<T>::const_iterator	cend() const
	{ return this->c.cend(); }                                             */

};

#endif

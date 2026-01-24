#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span	&Span::operator=(Span &obj)
{
	if (this != &obj)
	{
		this->_size = obj._size;
		this->_arr = std::vector<int>(obj._arr);
	} 
	return *this;
}

Span::Span(Span &obj) { operator=(obj); }

Span::~Span() {}


// Adds a single number to the Span array
void	Span::addNumber(int n)
{
	if (this->_arr.size() < this->_size)
		this->_arr.push_back(n);
	else
		throw FullSpan();
}

// Adds multiple numbers to your Span in a single call
void	Span::addSequence(std::vector<int> seq)
{
	if (this->_arr.size() >= this->_size)
		throw FullSpan();

	for (std::vector<int>::iterator it = seq.begin(); it != seq.end(); ++it)
		{ this->addNumber(*it); }

}

// Finds the shortest span between consecutive numbers in the class array
unsigned int	Span::shortestSpan()
{
	if (this->_arr.size() <= 1)
		throw NoSpan();

	int	tmp = 0;
	int span = abs(this->_arr[0] - this->_arr[1]);

	for (std::vector<int>::iterator it = _arr.begin(); (it + 1) != _arr.end(); ++it)
	{
		tmp = abs(*it - *(it + 1));
		if (tmp < span)
			span = tmp;
	}
	return span;
}

// Finds the longest span between consecutive numbers in the class array
unsigned int	Span::longestSpan()
{
	if (this->_arr.size() <= 1)
		throw NoSpan();

	int	tmp = 0;
	int span = 0;

	for (std::vector<int>::iterator it = _arr.begin(); (it + 1) != _arr.end(); ++it)
	{
		tmp = abs(*it - *(it + 1));
		if (tmp > span)
			span = tmp;
	}
	return span;
}

int Span::getSize() { return this->_arr.size(); }

int Span::getElem(int idx) { return this->_arr[idx]; }


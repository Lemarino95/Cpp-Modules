#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _elem(NULL) {}

// Creates an array of n elements
template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_elem = new T[n]();
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &obj)
{
	if (this->_elem)
		delete[] this->_elem;

	if (this != &obj)
	{
		this->_size = obj._size;
		this->_elem = new T[this->_size];
		for (size_t i = 0; i < _size; i++)
			this->_elem[i] = obj._elem[i];
	}
	return *this;
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	_size = 0;
	_elem = NULL;
	operator=(obj);
}

template <typename T>
Array<T>::~Array() { delete[] this->_elem; }

// Returns the number of elements in the array
template <typename T>
unsigned int	Array<T>::size() const { return this->_size; }

template <typename T>
T&	Array<T>::operator[](unsigned int idx)
{
	if (idx >= this->_size)
		throw (std::out_of_range("index out of range"));
	return this->_elem[idx];
}

template <typename T>
const T&	Array<T>::operator[](unsigned int idx) const
{
	if (idx >= this->_size)
		throw (std::out_of_range("index out of range"));
	return this->_elem[idx];
}

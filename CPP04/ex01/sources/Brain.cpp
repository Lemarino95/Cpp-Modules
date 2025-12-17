#include "../includes/Brain.hpp"

Brain::Brain() { std::cout << "Ideas are popping up like crazy" << std::endl; }

Brain	&Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return *this;
}

Brain::Brain(const Brain &obj) { Brain::operator=(obj); }

Brain::~Brain() { std::cout << "Ideas are disappearing for good" << std::endl; }

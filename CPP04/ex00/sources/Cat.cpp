#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{ std::cout << "A cat was created" << "\n"; }

Cat	&Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	
	return *this;
}

Cat::Cat(const Cat &obj) { Cat::operator=(obj); }

Cat::~Cat() { std::cout << "A cat was destroyed" << "\n"; }


void	Cat::makeSound() const { std::cout << "Miao" << "\n"; }

std::string Cat::getType() { return type; }

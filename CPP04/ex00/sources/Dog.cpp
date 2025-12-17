#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{ std::cout << "A dog was created" << "\n"; }

Dog	&Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		this->type = obj.type;
	
	return *this;
}

Dog::Dog(const Dog &obj) { Dog::operator=(obj); }

Dog::~Dog() { std::cout << "A dog was destroyed" << "\n"; }


void	Dog::makeSound() const { std::cout << "Woof" << "\n"; }

std::string Dog::getType() { return type; }

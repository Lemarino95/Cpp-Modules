#include "../includes/Dog.hpp"

Dog::Dog() : A_Animal("Dog")
{
	std::cout << "A dog was created" << "\n";
	_brain = new Brain();
}

Dog	&Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		this->_brain = new Brain(*obj._brain);
	}
	
	return *this;
}

Dog::Dog(const Dog &obj) { Dog::operator=(obj); }

Dog::~Dog() { delete _brain; std::cout << "A dog was destroyed" << "\n"; }

void	Dog::makeSound() const { std::cout << "Woof" << "\n"; }

std::string Dog::getType() { return type; }

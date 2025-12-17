#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A cat was created" << "\n";
	_brain = new Brain();
}

Cat	&Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
		this->_brain = new Brain(*obj._brain);
	}

	return *this;
}

Cat::Cat(const Cat &obj) { Cat::operator=(obj); }

Cat::~Cat() { delete _brain; std::cout << "A cat was destroyed" << "\n"; }

void	Cat::makeSound() const { std::cout << "Miao" << "\n"; }

std::string Cat::getType() { return type; }

void	Cat::print_Brainaddress()
{
	std::cout << "_brain address of " << this->getType() << ": " << _brain << std::endl;
}
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Platypus") { std::cout << "A generic Wrong animal was created." << "\n"; }

WrongAnimal::WrongAnimal(std::string str) : type(str)
{
	std::cout << "A specific Wrong animal was created." << std::endl;// == << "\n" << std::flush
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) { WrongAnimal::operator=(obj); }

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << "An Wrong animal was destroyed." << std::endl;  }

void	WrongAnimal::makeSound() const { std::cout << "The Wrong animal mutters something about your mom." << "\n"; }

std::string WrongAnimal::getType() const { return type; }
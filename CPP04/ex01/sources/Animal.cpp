#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal") { std::cout << "A generic animal was created." << "\n"; }

Animal::Animal(std::string str) : type(str)
{
	std::cout << "A specific animal was created." << std::endl;// == << "\n" << std::flush
}

Animal::Animal(const Animal &obj) { Animal::operator=(obj); }

Animal	&Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

Animal::~Animal() { std::cout << "An animal was destroyed." << std::endl; }

void	Animal::makeSound() const { std::cout << "The animal makes a sound" << "\n"; }

std::string Animal::getType() const { return type; }

#include "../includes/A_Animal.hpp"

A_Animal::A_Animal() : type("A_Animal") { std::cout << "A generic A_animal was created." << "\n"; }

A_Animal::A_Animal(std::string str) : type(str)
{
	std::cout << "A specific A_animal was created." << std::endl;// == << "\n" << std::flush
}

A_Animal::A_Animal(const A_Animal &obj) { A_Animal::operator=(obj); }

A_Animal	&A_Animal::operator=(const A_Animal &obj)
{
	if (this != &obj)
		this->type = obj.type;
	return *this;
}

A_Animal::~A_Animal() { std::cout << "An A_animal was destroyed." << std::endl; }

void	A_Animal::makeSound() const { std::cout << "The A_animal makes a sound" << "\n"; }

std::string A_Animal::getType() const { return type; }

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{ std::cout << "A bad kitty was created" << "\n"; }

WrongCat	&WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		this->type = obj.type;
	
	return *this;
}

WrongCat::WrongCat(const WrongCat &obj) { WrongCat::operator=(obj); }

WrongCat::~WrongCat() { std::cout << "A wrong cat was destroyed" << "\n"; }


void	WrongCat::makeSound() const { std::cout << "Hissss" << "\n"; }

std::string WrongCat::getType() { return type; }

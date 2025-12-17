#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") { std::cout << "Ice Materia created" << "\n"; }

Ice::Ice(const Ice &obj) { Ice::operator=(obj); }

Ice	&Ice::operator=(const Ice &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}

	return *this;
}

Ice::~Ice() { std::cout << BGR << "Ice Materia destroyed" << NO_C << "\n"; }

Ice	*Ice::clone() const
{
	std::cout << "Ice Materia cloned" << "\n";
	return (new Ice());
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << "\n";
}

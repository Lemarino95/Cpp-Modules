#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure") { std::cout << "Cure Materia created" << "\n"; }

Cure::Cure(const Cure &obj) { Cure::operator=(obj); }

Cure	&Cure::operator=(const Cure &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}

	return *this;
}

Cure::~Cure() { std::cout << BGR << "Cure Materia destroyed" << NO_C << "\n"; }

Cure	*Cure::clone() const
{
	std::cout << "cloning Cure Materia" << "\n";
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << "\n";
}

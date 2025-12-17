#include "../includes/AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) { _type = type; }

AMateria::AMateria(const AMateria &obj) { AMateria::operator=(obj); /* AMateria(obj.getType() */ }

AMateria	&AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}

	return *this;
}

AMateria::~AMateria() {}


std::string const	&AMateria::getType() const { return _type; }

void	AMateria::use(ICharacter& target)
{
	std::cout << "* tried to use a materia on " << target.getName() << " *" << "\n";
}
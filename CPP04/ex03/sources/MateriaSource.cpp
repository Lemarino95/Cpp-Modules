#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
	std::cout << "MateriaSource constructed, the reactor operates at full force" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource &obj) { MateriaSource::operator=(obj); }

MateriaSource	&MateriaSource::operator=(MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_source[i])
				this->_source[i] = obj._source[i]->clone();
			else
				this->_source[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	int	i = 0;
	while (i < 4 && _source[i])
	{
		delete _source[i];
		_source[i] = NULL;
		i++;
	}
	std::cout << BGR << "MateriaSource destructed, the reactor shutted down" << NO_C << std::endl;
}


void	MateriaSource::printTypes()
{
	if (_source[0] == NULL)
	{
		std::cout << "MateriaSource is empty" << std::endl;
		return;
	}
	for (int i = 0; i < 4 && _source[i]; i++)
	{
		std::cout << "Materia type of _source[" << i << "] : " << _source[i]->getType() << "\n";
	}
}


void	MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;
	while (i < 4 && _source[i])
		i++;
	if (i < 4)
		_source[i] = m;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;
	while (i < 4 && _source[i])
	{
		if (type == _source[i]->getType())
			return _source[i]->clone();
		i++;
	}
	std::cout << "Unknown materia type" << std::endl;
	return 0;
}
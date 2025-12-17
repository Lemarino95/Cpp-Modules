#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_source[4];

public:
	MateriaSource();
	MateriaSource(MateriaSource &obj);
	MateriaSource	&operator=(MateriaSource &obj);
	~MateriaSource();

	void		printTypes();
	void		learnMateria(AMateria* m); // Saves m in _source
	AMateria*	createMateria(std::string const &type); // Looks for a Materia of the same type and returns a clone 
};

#endif
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];// Equipped materias
	AMateria	*_backpack[20];// Unequipped materias

public:
	Character();
	Character(std::string name);
	Character(const Character &obj);
	Character	&operator=(const Character &obj);
	~Character();

	std::string const	&getName() const;
	void	equip(AMateria* m);// Saves m in _inventory
	void	unequip(int idx);// Moves the Materia in _inventory[idx] to _backpack
	void	use(int idx, ICharacter& target);
	void	delete_materias();
};


#endif
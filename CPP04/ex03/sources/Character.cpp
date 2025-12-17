#include "../includes/Character.hpp"

Character::Character() : _name("Rando")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		this->_backpack[i] = NULL;
	std::cout << "A random character is born" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		this->_backpack[i] = NULL;
	std::cout << "A character named " << _name << " is born" << std::endl;
}

Character::Character(const Character &obj) { Character::operator=(obj); }

// static AMateria	*copy_Materia(const AMateria *obj_mat)
// {
// 	if (obj_mat)
// 	{
// 		if (obj_mat->getType() == "ice")
// 		return (new Ice(obj_mat)) ;
		
// 	}
// }

Character	&Character::operator=(const Character &obj)
{
	delete_materias();
	if (this != &obj)
	{
		this->_name = obj._name;
		for (int i = 0; i < 4; i++)
		{
			if(obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		for (int i = 0; i < 20; i++)
		{
			if(obj._inventory[i])
				this->_backpack[i] = obj._backpack[i]->clone();
			else
				this->_backpack[i] = NULL;
		}
	}
	return *this;
}


Character::~Character()
{
	delete_materias();
	std::cout << BGR << _name << " is out of combat" << NO_C << std::endl;
}


std::string const	&Character::getName() const { return _name; }


void	Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (!this->_inventory[i])
	{
		this->_inventory[i] = m;
		std::cout << m->getType() << " materia equipped on " << this->_name << " in _inventory[" << i << std::endl;
		return;
	}
	std::cout << this->_name << " inventory's is full" << std::endl;
}


void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid inventory index" << std::endl;
		return;
	}

	int	i = 0;
	while (this->_backpack[i] && i < 20)
		i++;
	if (i < 20)
	{
		_backpack[i] = _inventory[idx];
		_inventory[idx] = NULL;
		std::cout << _backpack[i]->getType() << " materia succesfully unequipped from " << _name << std::endl;
	}
	else
		std::cout << BGY << _backpack[i]->getType() << " materia got lost from " << _name << NO_C << std::endl;
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid inventory index" << std::endl;
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}


void	Character::delete_materias()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	int	j = 0;
	while (j < 20 && this->_backpack[j])
	{
		if (this->_backpack[j])
		{
			delete this->_backpack[j];
			this->_backpack[j] = NULL;
		}
		j++;
	}
	// std::cout << R << "Materias deleted" << NO_C << std::endl;
}
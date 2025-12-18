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

Character::Character(const Character &obj)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 20; i++)
		this->_backpack[i] = NULL;
	Character::operator=(obj);
}

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
			if(obj._backpack[i])
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
	if (!m)
	{
		std::cout << "Materia could not be equipped" << std::endl;
		return ;
	}
	int	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (!this->_inventory[i])
	{
		this->_inventory[i] = m;
		std::cout << m->getType() << " materia equipped on " << this->_name << " in _inventory[" << i << "]" << std::endl;
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
	else if (!_inventory[idx])
	{
		std::cout << "inventory slot already empty" << std::endl;
		return ;
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
	{
		std::cout << BGY << _inventory[idx]->getType() << " materia got lost from " << _name << NO_C << std::endl;
		_inventory[idx] = NULL;
	}
}


void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid inventory index" << std::endl;
	else if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "Couldn't use materia: empty inventory slot" << std::endl;
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
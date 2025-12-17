#include "ClapTrap.hpp"

/*============================== O C F ============================*/

// Default Constructor
ClapTrap::ClapTrap()
{
	std::cout << "A new vault hunter was constructed" << "\n";
	name = "Vault hunter";
	max_hp = 0;
	h_p = 0;
	e_p = 0;
	a_d = 0;
}

// Second Constructor
ClapTrap::ClapTrap(std::string str)
{
	std::cout << "This vault hunter's name is " << str << "\n";
	name = str;
	max_hp = 10;
	h_p = 10;
	e_p = 10;
	a_d = 1;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	ClapTrap::operator=(obj);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	if (this != &obj)
	{
		this->name = obj.name;
		this->max_hp = obj.max_hp;
		this->h_p = obj.h_p;
		this->e_p = obj.e_p;
		this->a_d = obj.a_d;
	}

	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << BGR << name << " was destroyed. DAMN YOU HANDSOME JACK!!" << NO_C << "\n";
}

/*=================================================================*/

void	ClapTrap::attack(const std::string &target)
{
	if (h_p == 0)
	{
		std::cout << R << name << " is dead." << NO_C << "\n";
	}
	if (e_p > 0 && h_p > 0)
	{
		e_p -= 1;
		std::cout << Y << name << " attacks " << target << "\n";
		std::cout << a_d << " damage dealt." << NO_C << "\n";
	}
	if (e_p == 0)
	{
		std::cout << Y << name << " is out of energy." << NO_C << "\n";
	}	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (h_p > 0)
	{
		h_p -= amount;
		std::cout << R << name << " lost " << amount << " healt point(s)." << NO_C << "\n";
	}
	if (h_p == 0)
	{
		std::cout << R << name << " is dead." << NO_C << "\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (h_p == 0)
	{
		std::cout << R << name << " is dead." << NO_C << "\n";
	}
	if (h_p < max_hp && e_p > 0)
	{
		e_p -= amount;
		h_p += amount;
		std::cout << G << name << " repaired itself." << "\n";
		std::cout << amount << " health point(s) recovered." << NO_C << "\n";
		if (h_p > 10)
			h_p = 10;
	}
	if (h_p == max_hp)
	{
		std::cout << G << name << " is at max health." << NO_C << "\n";
	}
	else if (e_p == 0)
	{
		std::cout << G << name << " is out of energy." << NO_C << "\n";
	}	
}

std::string	ClapTrap::getName() const { return name; }

int	ClapTrap::getHealth() const { return h_p; }

int	ClapTrap::getEnergy() const { return e_p; }

int	ClapTrap::getAttack() const { return a_d; }

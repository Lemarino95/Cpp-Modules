#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
public:
	Dog();
	Dog	&operator=(const Dog &obj);
	Dog(const Dog &obj);
	~Dog();

	void	makeSound() const;
	std::string getType();
};


#endif

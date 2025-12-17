#ifndef DOG_HPP
# define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class	Dog : public A_Animal
{
private:
	Brain	*_brain;

public:
	Dog();
	Dog	&operator=(const Dog &obj);
	Dog(const Dog &obj);
	~Dog();

	void	makeSound() const;
	std::string getType();
};


#endif

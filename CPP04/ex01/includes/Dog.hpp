#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
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
	void	print_Brainaddress();
};


#endif

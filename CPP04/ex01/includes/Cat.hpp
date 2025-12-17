#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
private:
	Brain	*_brain;

public:
	Cat();
	Cat	&operator=(const Cat &obj);
	Cat(const Cat &obj);
	~Cat();

	void	makeSound() const;
	std::string getType();
	void	print_Brainaddress();
};


#endif

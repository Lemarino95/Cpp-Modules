#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
public:
	Cat();
	Cat	&operator=(const Cat &obj);
	Cat(const Cat &obj);
	~Cat();

	void	makeSound() const;
	std::string getType();
};


#endif

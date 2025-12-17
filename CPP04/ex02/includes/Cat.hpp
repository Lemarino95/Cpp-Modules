#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class	Cat : public A_Animal
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
};


#endif

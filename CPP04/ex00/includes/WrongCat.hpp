#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class	WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat	&operator=(const WrongCat &obj);
	WrongCat(const WrongCat &obj);
	~WrongCat();

	void	makeSound() const;
	std::string	getType();
};


#endif
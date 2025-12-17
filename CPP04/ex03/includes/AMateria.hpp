#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria;// per aggirare iclusione circolare

#include "ICharacter.hpp"

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class	AMateria
{
protected:
	std::string	_type;

public:
	AMateria();// Non si puo' creare oggetto di classe astratta
	AMateria(std::string const &type);// types: ice; heal
	AMateria(const AMateria &obj);
	AMateria	&operator=(const AMateria &obj);
	virtual	~AMateria();

	std::string const	&getType() const;
	virtual	AMateria*	clone() const = 0;// abstract class = metodo definito in classe derivata
	virtual	void		use(ICharacter& target);
};

#endif
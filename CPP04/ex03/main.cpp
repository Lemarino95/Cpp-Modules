#include "includes/AMateria.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"
#include "includes/ICharacter.hpp"
#include "includes/Character.hpp"
#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"

int	main()
{

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(1);
	me->unequip(5);

	std::cout << "~~~~~~~~~~~~~" << std::endl;

	Character	cloud("Cloud");
	std::cout << BGG << "~~~Cloud' name: " << cloud.getName() << NO_C << std::endl;
	cloud.equip(src->createMateria("ice"));
	cloud.equip(src->createMateria("fire"));
	cloud.equip(src->createMateria("cure"));
	cloud.use(0, *me);
	cloud.use(1, *me);
	cloud.unequip(1);
	cloud.unequip(5);

	std::cout << "~~~~~~~~~~~~~" << std::endl;
	Character	zack(cloud);
	// Character	zack;
	// zack = cloud;
	std::cout << BGY << "~~~Zack's name: " << zack.getName() << NO_C << std::endl;
	cloud.equip(src->createMateria("ice"));
	cloud.equip(src->createMateria("fire"));
	cloud.equip(src->createMateria("cure"));
	cloud.use(0, *me);
	cloud.use(1, *me);
	cloud.use(2, *me);

	delete bob;
	delete me;
	delete src;

	return 0;
}
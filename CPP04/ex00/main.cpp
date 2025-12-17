#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int	main()
{
	Dog	Pollito;
	Cat	Friulo;
	std::cout << "Dog type: " << Pollito.getType() << " " << std::endl;
	Pollito.makeSound();
	std::cout << "Cat type: " << Friulo.getType() << " " << std::endl;
	Friulo.makeSound();

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << LG << std::endl;
	const Animal* meta = new Animal();
	const Animal* Zeus = new Dog();
	const Animal* Pilo = new Cat();
	std::cout << LC << std::endl;
	std::cout << "Animal type: " << Pilo->getType() << " " << std::endl;
	Pilo->makeSound(); //will output the cat sound!
	std::cout << "Animal type: " << Zeus->getType() << " " << std::endl;
	Zeus->makeSound();
	std::cout << "Animal type: " << meta->getType() << "\n";
	meta->makeSound();
	std::cout << NO_C << std::endl;

	std::cout << "~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

	std::cout << Y << std::endl;
	const WrongAnimal* Quasi = new WrongAnimal();
	const WrongAnimal* Modo = new WrongCat();
	WrongCat	Frollo;
	std::cout << M << std::endl;
	std::cout << "WrongAnimal type: " << Quasi->getType() << "\n";
	Quasi->makeSound();
	std::cout << "WrongAnimal type: " << Modo->getType() << "\n";
	Modo->makeSound();
	std::cout << "WrongCat type: " << Frollo.getType() << "\n";
	Frollo.makeSound();
	std::cout << NO_C << std::endl;

	Pilo->Animal::~Animal();
	delete Pilo;
	Zeus->Animal::~Animal();
	delete Zeus;
	meta->Animal::~Animal();
	delete meta;

	return 0;
}
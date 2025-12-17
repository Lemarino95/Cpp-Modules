#include "includes/A_Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"


int	main()
{
	A_Animal *beastz[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			std::cout << G ;
			beastz[i] = new Dog();
			std::cout << Y ;
			beastz[i]->makeSound();
		}
		else
		{
			std::cout << LC ;
			beastz[i] = new Cat();
			std::cout << Y ;
			beastz[i]->makeSound();
		}
	}

	std::cout << NO_C;

	for (int i = 0; i < 10; i++)
	{
		std::cout << BGR;
		delete beastz[i];
		std::cout << NO_C;
	}

	// std::cout << std::endl << "~~~~~~~~~~~~~~~~~~~" << std::endl;
	// std::cout << LG ;
	// A_Animal	beasty;
	// beasty.makeSound();
	// std::cout << R ;
	// beasty.~A_Animal();
	// std::cout << NO_C ;
// Poiche' beasty e' memorizzato sullo stack, verra' chiamato anche
//  il distruttore di default a prescindere che io lo chiami manualmente o meno.

	return 0;
}


/* int	main()
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
} */
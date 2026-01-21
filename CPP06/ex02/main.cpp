#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	genA()
{return new A();}

Base*	genB()
{return new B();}

Base*	genC()
{return new C();}


// Randomly instantiates A, B, or C and returns the instance as a Base pointer.
Base*	generate(void)
{
	Base*	(*fptr[3])();
	fptr[0] = &genA;
	fptr[1] = &genB;
	fptr[2] = &genC;

	std::srand(std::time(0));

	return fptr[std::rand() % 3]();
}

// Prints the actual type of the object pointed to by p: "A", "B", or "C"
void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << G << "A" << NO_C << '\n';
	else if (dynamic_cast<B*>(p))
		std::cout << BLUE << "B" << NO_C << '\n';
	else if (dynamic_cast<C*>(p))
		std::cout << M << "C" << NO_C << '\n';
	else
		std::cout << R << "Nessun cast" << NO_C << '\n';
}

// Prints the actual type of the object referenced
void	identify(Base& p)
{
	try
	{
		if (&dynamic_cast<A&>(p))
			std::cout << G << "A" << NO_C << '\n';
	}
	catch (...)
	{
		try
		{
			if (&dynamic_cast<B&>(p))
				std::cout << BLUE << "B" << NO_C << '\n';
		}
		catch (...)
		{
			try
			{
				if (&dynamic_cast<C&>(p))
					std::cout << M << "C" << NO_C << '\n';
			}
			catch (...)
			{
				std::cout << R << "Nessun cast" << NO_C << '\n';
			}
		}
	}
}

int	main()
{
	Base*	ptr = generate();

	identify(ptr);
	identify(*ptr);

	delete ptr;
}

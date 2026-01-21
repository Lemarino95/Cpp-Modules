#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		std::cout << G;
		Bureaucrat	tizio;
		// Bureaucrat	caio("Caio", 0);
		// Bureaucrat	semp("Sempronio", 3746);
		Bureaucrat	bob("Robert Robertson III", 74);
		std::cout << NO_C << std::endl;

		std::cout << "(tizio:) " << tizio;
		// tizio.demote(1);
		// std::cout << "(tizio:) " << tizio;

		std::cout << bob;
		bob.promote(5);
		std::cout << bob;
		// bob.promote(300);
		// std::cout << bob;
	}

	catch(std::exception &e)
	{
		std::cout << R << "Exception caught:" << e.what() << NO_C << std::endl;
	}
}
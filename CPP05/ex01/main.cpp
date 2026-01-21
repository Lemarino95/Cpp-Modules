#include "includes/Bureaucrat.hpp"
#include "includes/Form.hpp"

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

		Form	b34("b34", 70, 90);
		std::cout << b34;
		bob.signForm(b34);
		std::cout << b34;

		// Form	c3(b34);
		Form	c3;
		c3 = b34;
		std::cout << c3;
	}

	catch(std::exception &e)
	{
		std::cout << R << "Exception caught:" << e.what() << NO_C << std::endl;
	}
}
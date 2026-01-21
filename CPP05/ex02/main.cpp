#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"

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
		bob.promote(70);
		std::cout << bob;
		// bob.promote(300);
		// std::cout << bob;

		/* ____________Shrubbery Creation___________ */
		/* ShrubberyCreationForm	b34("home");
		std::cout << b34;
		bob.signForm(b34);
		std::cout << b34;
		bob.executeForm(b34);
		// b34.execute(bob);
		// tizio.signForm(b34);
		// std::cout << b34;
		// tizio.executeForm(b34); */

		/* ____________Robotomy Request___________ */
		/* RobotomyRequestForm g52("Gianni");
		std::cout << g52;
		bob.signForm(g52);
		std::cout << g52;
		bob.executeForm(g52);
		// g52.execute(bob);
		// tizio.signForm(g52);
		// std::cout << g52;
		// tizio.executeForm(g52); */
	
		/* ____________Presidential Pardon___________ */
		/* PresidentialPardonForm p1("Gianni");
		std::cout << p1;
		bob.signForm(p1);
		std::cout << p1;
		bob.executeForm(p1);
		// p1.execute(bob);
		// tizio.signForm(p1);
		// std::cout << p1;
		// tizio.executeForm(p1); */

		// Form	c3(b34);
		// Form	c3;
		// c3 = b34;
		// std::cout << c3;
	}

	catch(std::exception &e)
	{
		std::cout << R << "Exception caught:" << e.what() << NO_C << std::endl;
	}
}

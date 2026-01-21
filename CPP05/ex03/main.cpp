#include "includes/Bureaucrat.hpp"
#include "includes/AForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/Intern.hpp"

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

		/* ____________Internship___________ */
		Intern	opo;
		// AForm* form = opo.makeForm("ShrubberyCreationForm", "Etetete's lawn");
		// AForm* form = opo.makeForm("RobotomyRequestForm", "Etetete");
		AForm* form = opo.makeForm("PresidentialPardonForm", "Etetete");
		bob.signForm(*form);
		delete form;

	}

	catch(std::exception &e)
	{
		std::cout << R << "Exception caught:" << e.what() << NO_C << std::endl;
	}
}

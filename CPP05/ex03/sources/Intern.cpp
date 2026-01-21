#include "../includes/Intern.hpp"

Intern::Intern() { std::cout << "An intern was hired" << std::endl; }

Intern::Intern(const Intern &obj)
{ Intern::operator=(obj); }

Intern	&Intern::operator=(const Intern &obj)
{
	(void)(obj);
	return *this;
}

Intern::~Intern() { std::cout << BGR << "An intern was fired" << NO_C << std::endl; }

static AForm*	makeSCform(std::string target)
{ return new ShrubberyCreationForm(target); }

static AForm*	makeRRform(std::string target)
{ return new RobotomyRequestForm(target); }

static AForm*	makePPform(std::string target)
{ return new PresidentialPardonForm(target); }

// Returns a pointer to a AForm object corresponding to the form name passed as a parameter
AForm*	Intern::makeForm(std::string form_name, std::string form_target)
{
	std::string* forms_list = new std::string[3];
	forms_list[0] = "ShrubberyCreationForm";
	forms_list[1] = "RobotomyRequestForm";
	forms_list[2] = "PresidentialPardonForm";

	AForm*	(*fptr[3])(std::string target);
	fptr[0] = &makeSCform;
	fptr[1] = &makeRRform;
	fptr[2] = &makePPform;

	for (int i = 0; i < 3; i++)
	{
		if (forms_list[i] == form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			delete[] forms_list;
			return fptr[i](form_target);
		}
	}

	std::cout<< form_name << " is not an acceptable form" << std::endl;
	delete[] forms_list;
	return NULL;
}

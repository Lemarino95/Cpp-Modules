#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("CogInTheMachine"), _grade(150)
{ std::cout << this->_name << " got hired at the lowest grade (150)" << std::endl; }

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();

	std::cout << this->_name << " got hired with grade " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade) {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	(void)obj;
	std::cout << "Bureaucrats name can't be changed" << std::endl;

	return *this;
}

Bureaucrat::~Bureaucrat() { std::cout << BGR << this->_name << " got fired" << NO_C << std::endl; }

std::string	Bureaucrat::getName() const { return this-> _name; }

int	Bureaucrat::getGrade() const { return this->_grade; }

void	Bureaucrat::promote(int n_ranks)
{
	if ((this->_grade - n_ranks) < 1)
		throw GradeTooHighException();
	this->_grade -= n_ranks;
}

void	Bureaucrat::demote(int n_ranks)
{
	if ((this->_grade + n_ranks) > 150)
		throw GradeTooLowException();
	this->_grade += n_ranks;
}

void	Bureaucrat::signForm(Form &obj)
{
	if (this->getGrade() <= obj.getSignGrade())
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << obj.getName() << " because their grade is too low" << std::endl;
	obj.beSigned(*this);
}


std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj)
{
	stream << obj.getName() << ", bureaucrat grade: " << obj.getGrade() << std::endl;

	return stream;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{ return "Maximum grade exceeded"; }

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{ return "Minimum grade exceeded"; }

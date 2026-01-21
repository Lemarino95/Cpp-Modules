#include "../includes/AForm.hpp"

AForm::AForm() : _name("Form_sheet"), _signed(0), _sign_grade(150), _exec_grade(150)
{ std::cout << "Basic form sheet printed" << std::endl; }

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(0), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade > 150)
		throw GradeTooLowException();
	else if (_sign_grade < 1)
		throw GradeTooHighException();
	if (_exec_grade > 150)
		throw GradeTooLowException();
	else if (_exec_grade < 1)
		throw GradeTooHighException();

	std::cout << "Complex form sheet printed" << std::endl;
}

AForm::AForm(const AForm &obj) : _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{ std::cout << "printed a copy of form " << obj.getName() << std::endl; }

AForm	&AForm::operator=(const AForm &obj)
{
	std::cout << "Can't overwrite the form " << obj.getName() << std::endl;

	return *this;
}

AForm::~AForm() { std::cout << BGR << this->_name << " got shredded" << NO_C << std::endl; }

std::string	AForm::getName() const { return (std::string)this->_name; }
bool	AForm::getStatus() const { return this->_signed; }
int		AForm::getSignGrade() const { return this->_sign_grade; }
int		AForm::getExecGrade() const { return this->_exec_grade; }

//If the grade is too low, throw a AForm::GradeTooLowException
void	AForm::beSigned(Bureaucrat &obj)
{
	if (this->_signed == true)
	{
		std::cout << "form is already signed" << "\n";
		return ;
	}

	if (obj.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else 
		throw GradeTooLowException();
}

const char*	AForm::GradeTooHighException::what() const throw()
{ return "Maximum grade exceeded"; }

const char*	AForm::GradeTooLowException::what() const throw()
{ return "Minimum grade exceeded"; }

const char*	AForm::UnsignedForm::what() const throw()
{ return "Attempted to execute an unsigned form"; }

// Checks that the form is signed and that the grade of the bureaucrat attempting
//  to execute the form is high enough. Otherwise, throw an appropriate exception.
void	AForm::execute(Bureaucrat const &executor) const
{
	if (this->_signed == 0)
	{
		std::cout << this->getName() << " is unsigned" << std::endl;
		throw UnsignedForm();
	}
	if (this->_exec_grade < executor.getGrade())
	{
		std::cout << executor.getName() << " cannot execute " << this->getName() << std::endl;
		throw GradeTooLowException();
	}

	this->execute2();
}

std::ostream	&operator<<(std::ostream &stream, const AForm &obj)
{
	stream << "form name: " << obj.getName() << std::endl;
	stream << "signed? " << obj.getStatus() << std::endl;
	stream << "minimum grade to be signed: " << obj.getSignGrade() << std::endl;
	stream << "minimum grade to be executed: " << obj.getExecGrade() << std::endl;

	return stream;
}

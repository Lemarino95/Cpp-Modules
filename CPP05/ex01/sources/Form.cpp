#include "../includes/Form.hpp"

Form::Form() : _name("Form_sheet"), _signed(0), _sign_grade(150), _exec_grade(150)
{ std::cout << "Basic form sheet printed" << std::endl; }

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(0), _sign_grade(sign_grade), _exec_grade(exec_grade)
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

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{ std::cout << "printed a copy of form " << obj.getName() << std::endl; }

Form	&Form::operator=(const Form &obj)
{
	std::cout << "Can't overwrite the form " << obj.getName() << std::endl;

	return *this;
}

Form::~Form() { std::cout << BGR << this->_name << " got shredded" << NO_C << std::endl; }

std::string	Form::getName() const { return (std::string)this->_name; }
bool		Form::getStatus() const { return this->_signed; }
int			Form::getSignGrade() const { return this->_sign_grade; }
int			Form::getExecGrade() const { return this->_exec_grade; }

//If the grade is too low, throw a Form::GradeTooLowException
void	Form::beSigned(Bureaucrat &obj)
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

const char*	Form::GradeTooHighException::what() const throw()
{ return "Maximum grade exceeded"; }

const char*	Form::GradeTooLowException::what() const throw()
{ return "Minimum grade exceeded"; }


std::ostream	&operator<<(std::ostream &stream, const Form &obj)
{
	stream << "form name: " << obj.getName() << std::endl;
	stream << "signed? " << obj.getStatus() << std::endl;
	stream << "minimum grade to be signed: " << obj.getSignGrade() << std::endl;
	stream << "minimum grade to be executed: " << obj.getExecGrade() << std::endl;

	return stream;
}

#include "../includes/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Arthur Dent")
{ std::cout << "Basic Presidential pardon form sheet printed" << std::endl; }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{ std::cout << "Presidential pardon form for \"" << target << "\" printed" << std::endl; }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj._name, obj._sign_grade, obj._exec_grade)
{
	this->_signed = obj._signed;
	std::cout << "printed a copy of Presidential pardon form for \"" << this->_target << "\"" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "Can't overwrite the form " << obj.getName() << std::endl;

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// Informs that <target> has been pardoned by Zaphod Beeblebrox.
void	PresidentialPardonForm::execute2() const
{ std::cout << this->_target <<" was pardoned by the illustrous Zaphod Beeblebrox" << std::endl; }

std::string	PresidentialPardonForm::getTarget() const
{ return this->_target; }


std::ostream	&operator<<(std::ostream &stream, const PresidentialPardonForm &obj)
{
	stream << "form name: " << obj.getName() << std::endl;
	stream << "target: " << obj.getTarget() << std::endl;
	stream << "signed? " << obj.getStatus() << std::endl;
	stream << "minimum grade to be signed: " << obj.getSignGrade() << std::endl;
	stream << "minimum grade to be executed: " << obj.getExecGrade() << std::endl;

	return stream;
}

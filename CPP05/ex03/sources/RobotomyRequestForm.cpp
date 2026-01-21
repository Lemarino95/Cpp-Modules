#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Arthur Dent")
{ std::cout << "Basic Robotomy request form sheet printed" << std::endl; }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{ std::cout << "Robotomy request form for \"" << target << "\" printed" << std::endl; }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj._name, obj._sign_grade, obj._exec_grade)
{
	this->_signed = obj._signed;
	std::cout << "printed a copy of Robotomy request form for \"" << this->_target << "\"" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "Can't overwrite the form " << obj.getName() << std::endl;

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

// Makes some drilling noises, then informs that <target> has been robotomized
//  successfully 50% of the time. Otherwise, it informs that the robotomy failed.
void	RobotomyRequestForm::execute2() const
{
	//Without seeding, you'll get the same sequence of "random" numbers every time
	std::srand(std::time(0));

	if (std::rand() % 2 == 0)
	{
		std::cout << BGY << "BBRRRRRRRRRRRRRRRRRRRRRRRRRRR";
		std::cout << "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << NO_C << std::endl;
	}
	else
		std::cout << "robotomization of "<< this->_target <<" failed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{ return this->_target; }


std::ostream	&operator<<(std::ostream &stream, const RobotomyRequestForm &obj)
{
	stream << "form name: " << obj.getName() << std::endl;
	stream << "target: " << obj.getTarget() << std::endl;
	stream << "signed? " << obj.getStatus() << std::endl;
	stream << "minimum grade to be signed: " << obj.getSignGrade() << std::endl;
	stream << "minimum grade to be executed: " << obj.getExecGrade() << std::endl;

	return stream;
}

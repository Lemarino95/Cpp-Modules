#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

// Required grades: sign 72, exec 45
class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;

public:
	/* _______________________OCF_________________________ */
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	/* ___________________Other Methods___________________ */
// Makes some drilling noises, then informs that <target> has been robotomized
//  successfully 50% of the time. Otherwise, it informs that the robotomy failed.
	void	execute2() const;
	std::string	getTarget() const;
};

std::ostream	&operator<<(std::ostream &stream, const RobotomyRequestForm &obj);

#endif
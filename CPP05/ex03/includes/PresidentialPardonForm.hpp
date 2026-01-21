#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

// Required grades: sign 25, exec 5
class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
	/* _______________________OCF_________________________ */
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &obj);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	/* ___________________Other Methods___________________ */
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
	void	execute2() const;
	std::string	getTarget() const;
};

std::ostream	&operator<<(std::ostream &stream, const PresidentialPardonForm &obj);



#endif
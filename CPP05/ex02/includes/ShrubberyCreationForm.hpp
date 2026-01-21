#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <bits/stdc++.h>

// Required grades: sign 145, exec 137
class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

public:
	/* _______________________OCF_________________________ */
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	/* ___________________Other Methods___________________ */
// Creates a file <target>_shrubbery in the working directory and writes ASCII trees
// inside it
	void	execute2() const;
	std::string	getTarget() const;
};

std::ostream	&operator<<(std::ostream &stream, const ShrubberyCreationForm &obj);

#endif
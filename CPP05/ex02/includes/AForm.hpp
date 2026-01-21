#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

class	AForm;

#include "Bureaucrat.hpp"

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_C "\e[0m"
# define BLACK "\e[30m"
# define R "\033[31m"
# define G "\e[32m"
# define LG "\033[32;1m"
# define Y "\033[33m"
# define B "\033[34m"
# define M "\033[95m"
# define LC "\033[96m"
# define BGR "\033[41m"
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

class	AForm
{
protected:
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;// Minimum Bureaucrat grade required to sign.
	const int			_exec_grade;// Minimum Bureaucrat grade required to execute.

public:
	/* _______________________OCF_________________________ */
	AForm();
	AForm(std::string name, int sign_grade, int exec_grade);
	AForm(const AForm &obj);
	AForm	&operator=(const AForm &obj);
	~AForm();

	/* _________________Exception Classes_________________ */
	class	GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class	UnsignedForm : public std::exception
	{
		virtual const char*	what() const throw();
	};

	/* ______________________Getters______________________ */
	std::string	getName() const;
	bool		getStatus() const;
	int			getSignGrade() const;
	int			getExecGrade() const;

	/* ___________________Other Methods___________________ */
// Changes the form’s status to signed if the bureaucrat’s grade is high enough
	void		beSigned(Bureaucrat &obj);

// Checks that the form is signed and that the grade of the bureaucrat attempting
//  to execute the form is high enough. Otherwise, throw an appropriate exception.
	void	execute(Bureaucrat const &executor) const;
	virtual void	execute2() const = 0;
};

std::ostream	&operator<<(std::ostream &stream, const AForm &obj);

#endif
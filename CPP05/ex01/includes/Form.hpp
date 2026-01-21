#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class	Form;

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

class	Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_sign_grade;// Minimum Bureaucrat grade required to sign.
	const int			_exec_grade;// Minimum Bureaucrat grade required to execute.

public:
	Form();
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form &obj);
	Form	&operator=(const Form &obj);
	~Form();

	class	GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	std::string	getName() const;
	bool	getStatus() const;
	int		getSignGrade() const;
	int		getExecGrade() const;

	// Changes the form’s status to signed if the bureaucrat’s grade is high enough
	void	beSigned(Bureaucrat &obj);
};

std::ostream	&operator<<(std::ostream &stream, const Form &obj);

#endif
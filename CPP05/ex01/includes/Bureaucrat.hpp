#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat;

#include "Form.hpp"

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

class	Bureaucrat
{
private:
	std::string	_name;
	int			_grade;// max == 1, min == 150

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat	&operator=(const Bureaucrat &obj);
	~Bureaucrat();
	
	class	GradeTooHighException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	class	GradeTooLowException : public std::exception
	{
		virtual const char*	what() const throw();
	};

	std::string	getName() const;
	int			getGrade() const;
	void		promote(int n_ranks);
	void		demote(int n_ranks);
	void		signForm(Form &obj);
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat &obj);


#endif
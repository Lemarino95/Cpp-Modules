#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("lawn")
{ std::cout << "Basic shrubbery creation form sheet printed" << std::endl; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{ std::cout << "Shrubbery creation form for \"" << target << "\" printed" << std::endl; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj._name, obj._sign_grade, obj._exec_grade)
{
	this->_signed = obj._signed;
	std::cout << "printed a copy of shrubbery creation form for \"" << this->_target << "\"" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "Can't overwrite the form " << obj.getName() << std::endl;

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Creates a file <target>_shrubbery in the working directory and writes ASCII trees
// inside it
void	ShrubberyCreationForm::execute2() const
{
	/* Assemble output file's name */
	char*	ofilename = std::strcat((char*)this->_target.c_str(), "_shrubbery");
	std::ofstream	outfile(ofilename);

	/* Write in the outputfile */
	outfile << "   @@@        @@@@@        @@@@   " << "\n";
    outfile << "  @@@@@      @@@@@@@      @@@@@@  " << "\n";
    outfile << " @@@@@@@    @@@@@@@@@    @@@@@@@@ " << "\n";
    outfile << "@@@@@@@@@  @@@@@@@@@@@  @@@@@@@@@@" << "\n";
    outfile << " @@@@@@@    @@@@@@@@@    @@@@@@@@ " << "\n";
    outfile << "  @@@@@      @@@@@@@      @@@@@@  " << "\n";
    outfile << "    |          |||          ||    " << "\n";
    outfile << "    |          |||          ||    " << "\n";
    outfile << "   ---        -----        ----   " << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{ return this->_target; }


std::ostream	&operator<<(std::ostream &stream, const ShrubberyCreationForm &obj)
{
	stream << "form name: " << obj.getName() << std::endl;
	stream << "target: " << obj.getTarget() << std::endl;
	stream << "signed? " << obj.getStatus() << std::endl;
	stream << "minimum grade to be signed: " << obj.getSignGrade() << std::endl;
	stream << "minimum grade to be executed: " << obj.getExecGrade() << std::endl;

	return stream;
}

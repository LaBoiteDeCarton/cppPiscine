#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation", 145, 137), _target("default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src.getName(), 145, 137)
{
	*this = src;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	this->setIsSigned(src.getIsSigned());
	this->_target = src.getTarget();
	return (*this);
}

std::string const &		ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void					ShrubberyCreationForm::action() const
{
	std::ofstream	ofs;

	ofs.open(this->_target + "_shrubbery", std::ofstream::app);
	if (!ofs.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	ofs << "     .{{}}}}}}." << std::endl;
	ofs << "    {{{{{{(`)}}}." << std::endl;
	ofs << "   {{{(`)}}}}}}}}}" << std::endl;
	ofs << "  }}}}}}}}}{{(`){{{" << std::endl;
	ofs << "  }}}}{{{{(`)}}{{{{" << std::endl;
	ofs << " {{{(`)}}}}}}}{}}}}}" << std::endl;
	ofs << "{{{{{{{{(`)}}}}}}}}}}" << std::endl;
	ofs << "{{{{{{{}{{{{(`)}}}}}}" << std::endl;
	ofs << " {{{{{(`)   {{{{(`)}'" << std::endl;
	ofs << "  `\"\"'\" |   | \"'\"'`" << std::endl;
	ofs << "  (`)  /     \\" << std::endl;
	ofs << " ~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;
	return ;
}

const char *		ShrubberyCreationForm::OpenFileException::what() const throw()
{
	return ("Unable to open file");
}
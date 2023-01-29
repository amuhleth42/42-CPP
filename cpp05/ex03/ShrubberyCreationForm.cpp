#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137), _target("Default target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
	{
		throw Form::NotYetSignedException();
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream	file(this->_target + "_shrubbery");

		file << "                                                       ." << std::endl
			<< "                                              .         ;" << std::endl
			<< "                 .              .              ;%     ;;" << std::endl
			<< "                   ,           ,                :;%  %;" << std::endl
			<< "                    :         ;                   :;%;'     .," << std::endl
			<< "           ,.        %;     %;            ;        %;'    ,;" << std::endl
			<< "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
			<< "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl
			<< "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
			<< "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
			<< "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
			<< "                    `:%;.  :;bd%;          %;@%;'" << std::endl
			<< "                      `@%:.  :;%.         ;@@%;'" << std::endl
			<< "                        `@%.  `;@%.      ;@@%;" << std::endl
			<< "                          `@%%. `@%%    ;@@%;" << std::endl
			<< "                            ;@%. :@%%  %@@%;" << std::endl
			<< "                              %@bd%%%bd%%:;" << std::endl
			<< "                                #@%%%%%:;;" << std::endl
			<< "                                %@@%%%::;" << std::endl
			<< "                                %@@@%(o);  . '" << std::endl
			<< "                                %@@@o%;:(.,'" << std::endl
			<< "                            `.. %@@@o%::;" << std::endl
			<< "                               `)@@@o%::;" << std::endl
			<< "                                %@@(o)::;" << std::endl
			<< "                               .%@@@@%::;" << std::endl
			<< "                               ;%@@@@%::;." << std::endl
			<< "                              ;%@@@@%%:;;;." << std::endl
			<< "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("Default target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
	{
		throw Form::NotYetSignedException();
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << this->_target << " has been graciously forgiven by Zaphod Beeblebrox!" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

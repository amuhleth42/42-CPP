#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("Default target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	static int	rand_i = 0;
	if (!this->getSigned())
	{
		throw Form::NotYetSignedException();
		return ;
	}
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << "Drrrrrrrrrrrrrrrrrrr!" << std::endl;
		srand(time(NULL) + rand_i++);
		if (rand() % 2 == 1)
			std::cout << this->_target << " has been robotomized by " << executor.getName() << std::endl;
		else
			std::cout << "Robotomization of " << this->_target << " has failed!" << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

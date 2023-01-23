#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: The grade is too high.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: The grade is too low.");
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
}

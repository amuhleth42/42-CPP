#include "Form.hpp"

Form::Form(void) : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Form::Form(std::string name, int gts, int gtx) : _name(name), _signed(false), _gradeToSign(gts), _gradeToExecute(gtx)
{
}

Form::Form(Form const & src)
{
	*this = src;
}

Form::~Form(void)
{
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (_signed == true)
		throw Form::AlreadySignedException();
	if (this->_gradeToSign >= b.getGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Error: Grade is too high");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Error: Grade is too low");
}

const char*	Form::AlreadySignedException::what(void) const throw()
{
	return ("Form is already signed!");
}

const char*	Form::NotYetSignedException::what(void) const throw()
{
	return ("Form is not yet signed!");
}

Form&	Form::operator=(Form const & rhs)
{
	this->_signed = rhs._signed;
	this->_gradeToSign = rhs._gradeToSign;
	this->_gradeToExecute = rhs._gradeToExecute;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, Form const & f)
{
	o << "Form << " << f.getName() << " >>: ";
	if (f.getSigned())
		o << "signed";
	else
		o << "not signed";
	o << ", grade to sign: " << f.getGradeToSign();
	o << ", grade to execute: " << f.getGradeToExecute();
	return (o);

}

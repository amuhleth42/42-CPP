#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form {

public:
	Form(void);
	Form(std::string name, int gts, int gtx);
	Form(Form const & src);
	virtual	~Form(void);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;

	void			beSigned(Bureaucrat const & b);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class	GradeTooHighException : public std::exception {
		virtual const char* what(void) const throw();
	};
	class	GradeTooLowException : public std::exception {
		virtual const char* what(void) const throw();
	};
	class	AlreadySignedException : public std::exception {
		virtual const char* what(void) const throw();
	};
	class	NotYetSignedException : public std::exception {
		virtual const char* what(void) const throw();
	};

	Form&	operator=(Form const & rhs);

private:

	std::string const	_name;
	bool				_signed;
	int					_gradeToSign;
	int					_gradeToExecute;

};

std::ostream&	operator<<(std::ostream& o, Form const & f);

#endif

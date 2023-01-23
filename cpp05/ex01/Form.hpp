#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class	Form {

public:
	Form(void);
	Form(Form const & src);
	~Form(void);

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExecute(void) const;

	class	GradeTooHighException : public std::exception {
		virtual const char* what(void) const throw();
	};
	class	GradeTooLowException : public std::exception {
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

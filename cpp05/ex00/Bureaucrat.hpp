#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class	Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);

	class	GradeTooHighException : public std::exception {
		virtual const char*	what() const throw();
	};
	class	GradeTooLowException : public std::exception {
		virtual const char*	what() const throw();
	};

	Bureaucrat&	operator=(Bureaucrat const & rhs);

private:

	std::string		_name;
	int				_grade;

};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const & b);


#endif

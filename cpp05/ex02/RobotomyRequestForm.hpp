#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"
# include <cstdlib>

class	RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	virtual void	execute(Bureaucrat const & executor) const;

	RobotomyRequestForm&	operator=(RobotomyRequestForm const & rhs);

private:

	std::string	_target;

};

#endif

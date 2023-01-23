#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include "Form.hpp"

class	RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm&	operator=(RobotomyRequestForm const & rhs);

private:

};

#endif

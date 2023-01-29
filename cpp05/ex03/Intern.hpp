#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern {

public:

	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Form*	makeForm(std::string const & name, std::string const & target);

	Intern&	operator=(Intern const & rhs);

private:

};

#endif

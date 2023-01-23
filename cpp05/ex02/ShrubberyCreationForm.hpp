#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);

private:

};

#endif

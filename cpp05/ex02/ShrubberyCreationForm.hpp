#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	~ShrubberyCreationForm(void);

	virtual void	execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);

private:

	std::string	_target;

};

#endif

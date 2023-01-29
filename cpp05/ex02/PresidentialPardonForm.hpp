#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	virtual void	execute(Bureaucrat const & executor) const;

	PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);

private:

	std::string	_target;

};

#endif

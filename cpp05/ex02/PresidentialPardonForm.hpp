#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include "Form.hpp"

class	PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	~PresidentialPardonForm(void);

	PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);

private:

};

#endif

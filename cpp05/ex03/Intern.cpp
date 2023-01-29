#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern(void)
{
}

Form*	Intern::makeForm(std::string const & name, std::string const & target)
{
	std::string	tab[] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int	i = 0;
	while (i < 3 && tab[i].compare(name) != 0)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern has created a ShrubberyCreationForm." << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1 :
			std::cout << "Intern has created a RobotomyRequestForm." << std::endl;
			return (new RobotomyRequestForm(target));
		case 2 :
			std::cout << "Intern has created a PresidentialPardonForm." << std::endl;
			return (new PresidentialPardonForm(target));
		default :
			std::cout << "The form you asked does not exist. Please try again." << std::endl;
	}
	return (nullptr);
}

Intern&	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

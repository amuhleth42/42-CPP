#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		Bureaucrat	b("Jacques", 122);
		Intern		random;

		Form*	r;
		Form*	s;
		Form*	p;
		r = random.makeForm("robotomy request", "poor guy");
		s = random.makeForm("shrubbery creation", "forest");
		p = random.makeForm("presidential pardon", "rich guy");

		a.signForm(*r);
		a.signForm(*s);
		a.signForm(*p);
		a.executeForm(*r);
		a.executeForm(*s);
		a.executeForm(*p);

		Form*	f;
		f = random.makeForm("unknown form", "kevin");


	}
	catch (std::exception& e)
	{
		std::cout << "yoo" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}

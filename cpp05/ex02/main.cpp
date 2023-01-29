#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		Bureaucrat	b("Jacques", 122);
		//Form		f = Form("42's Admission", 50, 30);
		RobotomyRequestForm		r = RobotomyRequestForm("poor guy");
		ShrubberyCreationForm	s = ShrubberyCreationForm("treees");
		PresidentialPardonForm	p = PresidentialPardonForm("rich guy");
		std::cout << r << std::endl;

		b.signForm(r);
		a.signForm(r);
		b.signForm(r);
		a.signForm(s);
		a.signForm(p);
		b.executeForm(r);
		a.executeForm(r);
		a.executeForm(r);
		a.executeForm(r);
		a.executeForm(s);
		a.executeForm(p);


	}
	catch (std::exception& e)
	{
		std::cout << "yoo" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}

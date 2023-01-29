#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		Bureaucrat	b("Jacques", 122);
		//Form		f = Form("42's Admission", 50, 30);
		RobotomyRequestForm	r = RobotomyRequestForm();
		std::cout << r << std::endl;

		b.signForm(r);
		a.signForm(r);
		b.signForm(r);
		b.executeForm(r);
		a.executeForm(r);
		a.executeForm(r);
		a.executeForm(r);


	}
	catch (std::exception& e)
	{
		std::cout << "yoo" << std::endl;
		std::cout << e.what() << std::endl;
	}

	return (0);
}

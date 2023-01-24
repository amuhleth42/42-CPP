#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		Bureaucrat	b("Jacques", 122);
		Form		f = Form("42's Admission", 50, 30);
		std::cout << f << std::endl;

		b.signForm(f);
		a.signForm(f);
		b.signForm(f);

	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

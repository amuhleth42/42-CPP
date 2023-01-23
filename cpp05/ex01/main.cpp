#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		Bureaucrat	b("Jacques", 122);
		Form		f = Form("42's Admission", false, 50, 30);
		std::cout << f << std::endl;

		f.beSigned(a);
		f.beSigned(b);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	a("Damien", 22);
		std::cout << a << std::endl;
		Bureaucrat	b("Jacques", 88);
		std::cout << b << std::endl;
		Bureaucrat	c("Thierry", 1);
		std::cout << c << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
		c.incrementGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}

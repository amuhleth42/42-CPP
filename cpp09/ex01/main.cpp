#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string	str(argv[1]);
		RPN	rpn(str);
	}
	else
		std::cout << "Usage: " << argv[0] << " <RPN mathematical expression>" << std::endl;
	return (0);
}

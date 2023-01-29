#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <literal>" << std::endl;
		return (1);
	}
	Convert	c;

	c.detectType(argv[1]);
	c.printChar();
	c.printInt();
	c.printFloat();
	c.printDouble();
	return (0);
}

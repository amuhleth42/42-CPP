#include "Convert.hpp"

bool	isInt(std::string const & s)
{
	for ( unsigned int i = 0 ; i < s.length() ; i++)
	{
		if (!isdigit(s[i]) && s[i] != '-')
			return (false);
	}
	return (true);
}

bool	isFloat(std::string const &s)
{
	int	dotCount = 0;

	for ( unsigned int i = 0 ; i < s.length() ; i++)
	{
		if (!isdigit(s[i]) && s[i] != '-'
			&& s[i] != '.' && s[i] != 'f')
			return (false);
		if (s[i] == '.')
			dotCount++;
	}
	if (dotCount == 1)
		return (true);
	return (false);
}

bool	isDouble(std::string const & s)
{
	int	dotCount = 0;

	for ( unsigned int i = 0 ; i < s.length() ; i++)
	{
		if (!isdigit(s[i]) && s[i] != '-' && s[i] != '.')
			return (false);
		if (s[i] == '.')
			dotCount++;
	}
	if (dotCount == 1)
		return (true);
	return (false);
}

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

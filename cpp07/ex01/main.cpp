#include "iter.hpp"

void	printInt(int n)
{
	std::cout << n << std::endl;
}

void	printChar(char c)
{
	std::cout << c << std::endl;
}

int	main(void)
{
	int		tabInt[] = {42, 12, 23, 34, 45};
	char	tabChar[] = {'a', '6', '4', 'g', 'h', '8'};

	iter<int>(tabInt, 5, printInt);
	std::cout << std::endl;
	iter<char>(tabChar, 6, printChar);
	std::cout << std::endl;
	iter<char>(tabChar, 6, printInt);
	std::cout << std::endl;
	iter<int>(tabInt, 5, printType<int>);
	std::cout << std::endl;
	iter<char>(tabChar, 6, printType<char>);
}

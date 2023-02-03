#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	v(5, 5);

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	std::vector<int>::iterator it = easyfind(v, 8);
	if (it == v.end())
		std::cout << "end" << std::endl;
	else
		std::cout << *it << std::endl;
	std::vector<int>::iterator it2 = easyfind(v, 2);
	if (it2 == v.end())
		std::cout << "end" << std::endl;
	else
		std::cout << *it2 << std::endl;

	return (0);
}

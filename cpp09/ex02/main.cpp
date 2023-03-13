#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::vector<int>	v1;

	v1.push_back(5);
	v1.push_back(2);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(1);
	v1.push_back(7);

	PmergeMe	test(v1);

	test.printVector();

	test.mergeSort(test.getV());
	std::cout << std::endl;
	test.printVector();
	
}

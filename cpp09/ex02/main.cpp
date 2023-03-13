#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	std::vector<int>	v1;

	v1.push_back(5);
	v1.push_back(4);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(1);

	PmergeMe	test(v1);

	std::cout << "vector: ";
	test.printVector(test.getV());
	std::cout << "list: ";
	test.printList(test.getL());

	test.mergeSort(test.getV());
	test.mergeSort(test.getL());
	std::cout << std::endl;
	std::cout << "vector: ";
	test.printVector(test.getV());
	std::cout << "list: ";
	test.printList(test.getL());
	
}

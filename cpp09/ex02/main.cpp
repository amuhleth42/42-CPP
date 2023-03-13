#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	//std::stringstream	input;
	//int					num;

	/*for (int i = 1 ; i < argc ; i++)
	{
		std::stringstream	input;
		int	num;
		input << argv[i];
		input >> num;
		v.push_back(num);
	}
	*/
	if (argc < 2)
	{
		std::cout << "Usage: " << argv[0] << " <n1> <n2> <n3> ..." << std::endl;
		return 0;
	}

	PmergeMe	test(argc, argv);

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

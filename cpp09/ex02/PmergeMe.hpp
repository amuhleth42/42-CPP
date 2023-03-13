#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <vector>

class	PmergeMe {

public:

	PmergeMe(std::vector<int> & v);
	virtual	~PmergeMe(void);

	void	printVector(void);
	void	mergeSort(std::vector<int> & arr);
	void	merge(std::vector<int> & left, std::vector<int> & right, std::vector<int> & results);

	std::vector<int>&	getV(void);


private:

	std::vector<int>	_v;

	PmergeMe(void);
	PmergeMe(PmergeMe const & src);
	PmergeMe&	operator=(PmergeMe const & rhs);

};

#endif

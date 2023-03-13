#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <list>

class	PmergeMe {

public:

	PmergeMe(std::vector<int> & v);
	virtual	~PmergeMe(void);

	void	printVector(std::vector<int> & v);
	void	printList(std::list<int> & l);
	void	mergeSort(std::vector<int> & v);
	void	mergeSort(std::list<int> & l);
	void	merge(std::vector<int> & left, std::vector<int> & right, std::vector<int> & results);

	std::vector<int>&	getV(void);
	std::list<int>&		getL(void);


private:

	std::vector<int>	_v;
	std::list<int>		_l;

	PmergeMe(void);
	PmergeMe(PmergeMe const & src);
	PmergeMe&	operator=(PmergeMe const & rhs);

};

#endif

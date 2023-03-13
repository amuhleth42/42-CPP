#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> & v) : _v(v)
{
	_l = std::list<int>(v.begin(), v.end());
}

PmergeMe::~PmergeMe(void)
{
}

void	PmergeMe::printVector(std::vector<int> & v)
{
	for (unsigned long i = 0 ; i < v.size() ; i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::printList(std::list<int> & l)
{
	for (std::list<int>::iterator it = l.begin() ; it != l.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::mergeSort(std::list<int> & l)
{
    if (l.size() <= 1)
		return ;

    int mid = l.size() / 2;
	std::list<int>::iterator	it = l.begin();
	for (int i = 0 ; i < mid ; i++)
		it++;
	std::list<int> left(l.begin(), it);
	std::list<int> right(it, l.end());

    mergeSort(left);
    mergeSort(right);
    left.merge(right);
	l = left;
}

void	PmergeMe::mergeSort(std::vector<int> & v)
{
    if (v.size() <= 1)
		return ;

    int mid = v.size() / 2;
	std::vector<int>::iterator	it = v.begin();
	for (int i = 0 ; i < mid ; i++)
		it++;
	std::vector<int> left(v.begin(), it);
	std::vector<int> right(it, v.end());

    mergeSort(left);
    mergeSort(right);
    merge(left, right, v);
}

void PmergeMe::merge(std::vector<int>& left, std::vector<int>& right, std::vector<int>& result)
{
    int L_size = left.size();
    int R_size = right.size();
    int i = 0, j = 0, k = 0;
    while (j < L_size && k < R_size) 
    {
        if (left[j] < right[k]) {
            result[i] = left[j];
            j++;
        }
        else {
            result[i] = right[k];
            k++;
        }
        i++;
    }
	std::copy(&left[j], &left[L_size], &result[i]);
	std::copy(&right[k], &right[R_size], &result[i]);
}


std::vector<int>&	PmergeMe::getV(void)
{
	return (_v);
}

std::list<int>&	PmergeMe::getL(void)
{
	return (_l);
}

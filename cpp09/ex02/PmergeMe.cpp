#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> & v) : _v(v)
{
}

PmergeMe::~PmergeMe(void)
{
}

void	PmergeMe::printVector(void)
{
	for (unsigned long i = 0 ; i < _v.size() ; i++)
		std::cout << _v[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::mergeSort(std::vector<int> & v)
{
    if (v.size() <= 1)
		return ;

    int mid = v.size() / 2;
	std::vector<int> left(v.begin(), v.begin() + mid);
	std::vector<int> right(v.begin() + mid + 1, v.end());

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

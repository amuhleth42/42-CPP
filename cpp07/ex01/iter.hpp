#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename U>
void	iter(T * tab, int size, void (*f)(U))
{
	for (int i = 0 ; i < size ; i++)
		(*f)(tab[i]);
}

template <typename T>
void	printType(T const & t)
{
	std::cout << t << std::endl;
}

#endif

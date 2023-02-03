#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T & cont, int n)
{
	typename T::iterator	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		return (cont.end());
	return (it);
}

#endif

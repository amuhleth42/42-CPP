#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class	Array {

public:

	Array<T>(void);
	Array<T>(unsigned int n);
	Array<T>(Array<T> const & src);
	~Array<T>(void);

	unsigned int	size(void);

	Array<T>&	operator=(Array<T> const & rhs);

private:

	T *				_data;
	unsigned int	_size;

};

#include "Array.tpp"

#endif

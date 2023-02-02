#ifndef ARRAY_TPP
# define ARRAY_TPP


template <typename T>
Array<T>::Array(void) : _size(0), _data(new T[_size])
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[_size])
{
}

template <typename T>
Array<T>::Array(Array<T> const & src)
{
	*this = src;
}

template <typename T>
Array<T>::~Array(void)
{
}

template <typename T>
unsigned int	Array<T>::size(void)
{
	return (_size);
}


template <typename T>
Array<T>&	Array<T>::operator=(Array<T> const & rhs)
{
	if (_data)
		delete [] _data;
	_size = rhs._size;
	_data = new T[_size];
	for (unsigned int i = 0 ; i < _size ; i++)
		_data[i] = rhs._data[i];
	return (*this);
}

#endif

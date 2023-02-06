#ifndef ARRAY_TPP
# define ARRAY_TPP


template <typename T>
Array<T>::Array(void) : _size(0), _data(new T[_size])
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(Array<T> const & src)
{
	_data = NULL;
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
	if (this == &rhs)
		return (*this);
	if (_data != nullptr)
		delete [] _data;
	_size = rhs._size;
	_data = new T[_size];
	for (unsigned int i = 0 ; i < _size ; i++)
		_data[i] = rhs._data[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](int i)
{
	if (i < 0 || static_cast<int>(this->_size) <= i)
		throw std::exception();
	return (this->_data[i]);
}

template <typename T>
T const&	Array<T>::operator[](int i) const
{
	if (i < 0 || static_cast<int>(this->_size) <= i)
		throw std::exception();
	return (this->_data[i]);
}

#endif

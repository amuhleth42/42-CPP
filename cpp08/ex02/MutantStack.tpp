template< typename T, typename Cont >
MutantStack<T, Cont>::MutantStack(void) : std::stack<T, Cont>()
{
}

template< typename T, typename Cont >
MutantStack<T, Cont>::MutantStack(MutantStack<T, Cont> const & src) : std::stack<T, Cont>(src)
{
	*this = src;
}

template< typename T, typename Cont >
MutantStack<T, Cont>::~MutantStack(void)
{
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::iterator	MutantStack<T, Cont>::begin(void)
{
	return (this->c.begin());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::const_iterator	MutantStack<T, Cont>::begin(void) const
{
	return (this->c.begin());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::reverse_iterator	MutantStack<T, Cont>::rbegin(void)
{
	return (this->c.rbegin());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::const_reverse_iterator	MutantStack<T, Cont>::rbegin(void) const
{
	return (this->c.rbegin());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::iterator	MutantStack<T, Cont>::end(void)
{
	return (this->c.end());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::const_iterator	MutantStack<T, Cont>::end(void) const
{
	return (this->c.end());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::reverse_iterator	MutantStack<T, Cont>::rend(void)
{
	return (this->c.rend());
}

template< typename T, typename Cont >
typename MutantStack<T, Cont>::const_reverse_iterator	MutantStack<T, Cont>::rend(void) const
{
	return (this->c.rend());
}

template< typename T, typename Cont >
MutantStack<T, Cont>&	MutantStack<T, Cont>::operator=(MutantStack<T, Cont> const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

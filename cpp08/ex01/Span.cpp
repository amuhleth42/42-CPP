#include "Span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	_v.reserve(N);
}

Span::Span(Span const & src)
{
	*this = src;
}

Span::~Span(void)
{
}

void	Span::addNumber(int n)
{
	if (_v.size() == _N)
		throw std::out_of_range("addNumber");
	_v.push_back(n);
}

void	Span::insert(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (last - first + _v.size() > _N)
		throw std::out_of_range("insert");
	_v.insert(_v.end(), first, last);
}

unsigned int	Span::shortestSpan(void)
{
	if (_v.size() < 2)
		throw std::logic_error("shortestSpan");
}

unsigned int	Span::longestSpan(void)
{
	if (_v.size() < 2)
		throw std::logic_error("longestSpan");
}

Span&	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	_N = rhs._N;
	_v.clear();
	_v = rhs._v;
	return (*this);
}

Span::Span(void)
{
}

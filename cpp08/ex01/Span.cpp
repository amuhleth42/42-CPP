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

size_t	Span::size(void) const
{
	return (_v.size());
}

void	Span::addNumber(int n)
{
	if (_v.size() == _N)
		throw std::out_of_range("error: addNumber");
	_v.push_back(n);
}

void	Span::insert(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	if (last - first + _v.size() > _N)
		throw std::out_of_range("error: insert");
	_v.insert(_v.end(), first, last);
}

unsigned int	Span::shortestSpan(void)
{
	if (_v.size() < 2)
		throw std::logic_error("error: shortestSpan");
	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	unsigned int	res = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = _v.begin() ; it < _v.end() - 1 ; it++)
	{
		unsigned int	span = abs(*(it + 1) - *it);
		if (span < res)
			res = span;
	}
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (_v.size() < 2)
		throw std::logic_error("error: longestSpan");
	int res = *std::max_element(_v.begin(), _v.end())
		- *min_element(_v.begin(), _v.end());
	return (res);
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

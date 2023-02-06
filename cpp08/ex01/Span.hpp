#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>

class	Span {

public:

	Span(unsigned int N);
	Span(Span const & src);
	~Span(void);

	size_t	size(void) const;

	void	addNumber(int n);
	void	insert(std::vector<int>::iterator first, std::vector<int>::iterator last);

	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);

	Span&	operator=(Span const & rhs);

private:

	unsigned int		_N;
	std::vector<int>	_v;

	Span(void);
};


#endif

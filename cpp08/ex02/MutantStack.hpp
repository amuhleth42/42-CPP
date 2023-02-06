#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <iostream>

template <typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container> {

public:

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

public:

	MutantStack(void);
	MutantStack(MutantStack const & src);
	virtual ~MutantStack(void);


	iterator				begin(void);
	const_iterator			begin(void) const;
	reverse_iterator		rbegin(void);
	const_reverse_iterator	rbegin(void) const;

	iterator				end(void);
	const_iterator			end(void) const;
	reverse_iterator		rend(void);
	const_reverse_iterator	rend(void) const;

	MutantStack&	operator=(MutantStack const & rhs);

private:

};

# include "MutantStack.tpp"

#endif

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class	MutantStack : public std::stack<T> {

public:

	MutantStack(void);
	MutantStack(MutantStack const & src);
	virtual ~MutantStack(void);

	MutantStack&	operator=(MutantStack const & rhs);

private:

};

#endif

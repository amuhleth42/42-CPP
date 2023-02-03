#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

template <typename T>
class	MutantStack : std::stack<T> {

public:

	MutantStack(void);
	MutantStack(MutantStack const & src);
	virtual ~MutantStack(void);

	MutantStack&	operator=(MutantStack const & rhs);

private:

};

#endif

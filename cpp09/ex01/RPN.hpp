#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <stack>

class	RPN {

public:

	RPN(std::string	input);
	virtual	~RPN(void);

	bool	is_operand(std::string const & token);
	bool	is_operator(std::string const & token);
	int		do_op(char c);


private:

	std::stringstream	_input;
	std::stack<int>		_stack;

	int	_n1;
	int	_n2;

	RPN(void);
	RPN(RPN const & src);
	RPN&	operator=(RPN const & rhs);

};

#endif

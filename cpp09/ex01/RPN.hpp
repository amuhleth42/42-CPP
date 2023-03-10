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



private:

	std::stringstream	_input;
	std::stack<char> _stack;

	RPN(void);
	RPN(RPN const & src);
	RPN&	operator=(RPN const & rhs);

};

#endif

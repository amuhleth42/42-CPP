#include "RPN.hpp"

RPN::RPN(std::string input) : _input(input)
{
	std::string	token;

	//while (_input >> token)
		//std::cout << token<< std::endl;
	
	while (_input >> token)
	{
		if (is_operand(token))
		{
			//std::cout << "operand: " << token << std::endl;
			_stack.push(token[0] - '0');
		}
		else if (is_operator(token) && _stack.size() >= 2)
		{
			_n1 = _stack.top();
			_stack.pop();
			_n2 = _stack.top();
			_stack.pop();
			_stack.push(do_op(token[0]));

			//std::cout << "operator: " << token << std::endl;
		}
		else
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
	if (_stack.size() == 1)
		std::cout << _stack.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}

RPN::~RPN(void)
{
}

bool	RPN::is_operand(std::string const & token)
{
	return (token.size() == 1 && '0' <= token[0] && token[0] <= '9');
}

bool	RPN::is_operator(std::string const & token)
{
	if (token.size() != 1)
		return (false);
	return (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/');
}

int	RPN::do_op(char c)
{
	if (c == '+')
		return (_n2 + _n1);
	else if (c == '-')
		return (_n2 - _n1);
	else if (c == '*')
		return (_n2 * _n1);
	else if (c == '/')
		return (_n2 / _n1);
	else
		return (-42);
}



//	private

RPN::RPN(RPN const & src)
{
	(void)src;
}


RPN::RPN(void)
{
}

RPN&	RPN::operator=(RPN const & rhs)
{
	(void)rhs;
	return (*this);
}

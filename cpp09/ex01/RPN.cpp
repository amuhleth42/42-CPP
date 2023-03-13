#include "RPN.hpp"

RPN::RPN(std::string input) : _input(input)
{
	std::string	token;

	//while (_input >> token)
		//std::cout << token<< std::endl;
	
	while (_input >> token)
	{
		if (is_operand(token)
		{
		}
		else if (is_operator(token))
		{
		}
		else
		{
			std::cout << "Error" << std::endl;
			return ;
		}
	}
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

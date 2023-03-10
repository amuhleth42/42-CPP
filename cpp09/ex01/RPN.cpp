#include "RPN.hpp"

RPN::RPN(std::string input) : _input(input)
{
	std::string	word;

	while (_input >> word)
		std::cout << word << std::endl;
}

RPN::~RPN(void)
{
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

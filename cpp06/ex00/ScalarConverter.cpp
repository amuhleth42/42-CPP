#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{
}

void	ScalarConverter::convert(std::string const & s)
{
	this->_s = s;
	this->_type = detectType();
}

e_type	ScalarConverter::detectType(void)
{
}

void	ScalarConverter::castChar(void)
{
}

void	ScalarConverter::castInt(void)
{
}

void	ScalarConverter::castFloat(void)
{
}

void	ScalarConverter::castDouble(void)
{
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const & rhs)
{
	this->_s = rhs._s;
	this->_c = rhs._c;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	this->_type = rhs._type;
	this->_impossible = rhs._impossible;
	return (*this);
}

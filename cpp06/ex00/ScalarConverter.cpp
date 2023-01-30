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

void	ScalarConverter::detectType(char* str)
{
	std::string	s(str);

	if (s.compare("nan") == 0 || s.compare("nanf") == 0)
		this->setNan();
	if (s.compare("-inf") == 0 || s.compare("-inff") == 0)
		this->setNegInf();
	if (s.compare("inf") == 0 || s.compare("inff") == 0)
		this->setInf();
	if (s.length() == 3 && s[0] == '\'' && s[2] == '\'')
		this->setValues(s[1]);
	if (isInt(s))
		this->setValues(stoi(s));
	else if (isFloat(s))
		this->setValues(strtof(s.c_str(), NULL));
	else if (isDouble(s))
		this->setValues(strtod(s.c_str(), NULL));
}

void	ScalarConverter::setNan(void)
{
	this->_impossible = true;
	this->_f = NAN;
	this->_d = NAN;
}

void	ScalarConverter::setInf(void)
{
	this->_impossible = true;
	this->_f = INFINITY;
	this->_d = INFINITY;
}

void	ScalarConverter::setNegInf(void)
{
	this->_impossible = true;
	this->_f = INFINITY * -1;
	this->_d = INFINITY * -1;
}

void	ScalarConverter::setValues(char data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	ScalarConverter::setValues(int data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	ScalarConverter::setValues(float data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	ScalarConverter::setValues(double data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	ScalarConverter::printChar(void)
{
	if (this->_impossible)
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (isprint(this->_c))
			std::cout << "char: '" << this->_c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

void	ScalarConverter::printInt(void)
{
	if (this->_impossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_i << std::endl;
}

void	ScalarConverter::printFloat(void)
{
	std::cout << "float: " << this->_f << std::endl;
}

void	ScalarConverter::printDouble(void)
{
	std::cout << "double: " << this->_d << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const & rhs)
{
	this->_c = rhs._c;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	return (*this);
}

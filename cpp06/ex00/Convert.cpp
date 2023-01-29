#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(Convert const & src)
{
	*this = src;
}

Convert::~Convert(void)
{
}

void	Convert::detectType(char* str)
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

void	Convert::setNan(void)
{
	this->_impossible = true;
	this->_f = NAN;
	this->_d = NAN;
}

void	Convert::setInf(void)
{
	this->_impossible = true;
	this->_f = INFINITY;
	this->_d = INFINITY;
}

void	Convert::setNegInf(void)
{
	this->_impossible = true;
	this->_f = INFINITY * -1;
	this->_d = INFINITY * -1;
}

void	Convert::setValues(char data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	Convert::setValues(int data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	Convert::setValues(float data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	Convert::setValues(double data)
{
	this->_c = static_cast<char>(data);
	this->_i = static_cast<int>(data);
	this->_f = static_cast<float>(data);
	this->_d = static_cast<double>(data);
}

void	Convert::printChar(void)
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

void	Convert::printInt(void)
{
	if (this->_impossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_i << std::endl;
}

void	Convert::printFloat(void)
{
	std::cout << "float: " << this->_f << std::endl;
}

void	Convert::printDouble(void)
{
	std::cout << "double: " << this->_d << std::endl;
}

Convert&	Convert::operator=(Convert const & rhs)
{
	this->_c = rhs._c;
	this->_i = rhs._i;
	this->_f = rhs._f;
	this->_d = rhs._d;
	return (*this);
}

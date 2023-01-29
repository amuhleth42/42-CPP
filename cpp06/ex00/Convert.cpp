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
		this->setValues(NAN);
	if (s.compare("-inf") == 0 || s.compare("-inff") == 0)
		this->setValues(INFINITY);
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
	std::cout << "char: " << std::endl;
}

void	Convert::printInt(void)
{
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

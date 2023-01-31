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
	//std::cout << this->_type << std::endl;

	void (ScalarConverter::* f[4])(void) =
	{
		&ScalarConverter::castChar,
		&ScalarConverter::castInt,
		&ScalarConverter::castFloat,
		&ScalarConverter::castDouble

	};
	if (_type < 4)
		(this->*f[_type])();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (_type == i)
			continue ;
		(this->*f[i])();
	}
}

e_type	ScalarConverter::detectType(void)
{
	if (!_s.compare("-inf") || !_s.compare("-inff"))
		return (IS_NEG_INF);
	else if (!_s.compare("+inf") || !_s.compare("+inff"))
		return (IS_POS_INF);
	else if (!_s.compare("nan") || !_s.compare("nanf"))
		return (IS_NAN);
	if (_s.length() == 3 && _s[0] == '\'' && _s[2] == '\'')
		return (IS_CHAR);
	else if (_s.length() == 1 && isprint(_s[0]))
		return (IS_CHAR);
	if (isDouble(_s))
		return (IS_DOUBLE);
	else if (isFloat(_s))
		return (IS_FLOAT);
	else if (isInt(_s))
		return (IS_INT);
	return (NO_TYPE);
}

void	ScalarConverter::castChar(void)
{
	bool	impossible = false;

	switch (_type)
	{
		case IS_CHAR:
			_char = _s[0];
			break;
		case IS_INT:
			if (_int > 255 || _int < 0)
				impossible = true;
			else
				_char = static_cast<char>(_int);
			break;
		case IS_FLOAT:
			if (_float> 255 || _float< 0)
				impossible = true;
			else
				_char = static_cast<char>(_float);
			break;
		case IS_DOUBLE:
			if (_double> 255 || _double< 0)
				impossible = true;
			else
				_char = static_cast<char>(_double);
			break;
		default:
			impossible = true;
	}
	if (impossible || _charImpossible)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(_char))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << _char << "\'" << std::endl;
}

void	ScalarConverter::castInt(void)
{
	bool	impossible = false;

	switch (_type)
	{
		case IS_CHAR:
			_int = _char;
			break;
		case IS_INT:
		{
			double	res = strtod(_s.c_str(), NULL);
			if (std::numeric_limits<int>::max() < res || res < std::numeric_limits<int>::min())
			{
				impossible = true;
				_charImpossible = true;
			}
			else
				_int = static_cast<int>(res);
			break;
		}
		case IS_FLOAT:
		{
			if (std::numeric_limits<int>::max() < _float || _float < std::numeric_limits<int>::min())
				impossible = true;
			else
				_int = static_cast<int>(_float);
		}
		case IS_DOUBLE:
		{
			if (std::numeric_limits<int>::max() < _double|| _double< std::numeric_limits<int>::min())
				impossible = true;
			else
				_int = static_cast<int>(_double);
		}
		default:
			impossible = true;
	}
	if (impossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
}

void	ScalarConverter::castFloat(void)
{
	switch (_type)
	{
		case IS_CHAR:
			_float = static_cast<float>(_char);
		default:
			_float = 12;
	}
}

void	ScalarConverter::castDouble(void)
{
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const & rhs)
{
	this->_s = rhs._s;
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	this->_type = rhs._type;
	this->_charImpossible = rhs._charImpossible;
	return (*this);
}

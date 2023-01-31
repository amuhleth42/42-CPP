#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <string>

enum	e_type
{
	IS_CHAR,
	IS_INT,
	IS_FLOAT,
	IS_DOUBLE,
	IS_NEG_INF,
	IS_POS_INF,
	IS_NAN,
	NO_TYPE
};

class	ScalarConverter {

public:
	ScalarConverter(void);
	ScalarConverter(ScalarConverter const & src);
	~ScalarConverter(void);

	void	convert(std::string const & s);
	e_type	detectType(void);

	void	castChar(void);
	void	castInt(void);
	void	castFloat(void);
	void	castDouble(void);

	/*void	detectType(char *str);
	void	setNan(void);
	void	setInf(void);
	void	setNegInf(void);
	void	setValues(char data);
	void	setValues(int data);
	void	setValues(float data);
	void	setValues(double data);

	void	printChar(void);
	void	printInt(void);
	void	printFloat(void);
	void	printDouble(void);*/

	ScalarConverter&	operator=(ScalarConverter const & rhs);

private:

	std::string	_s;

	char	_char;
	int		_int;
	float	_float;
	double	_double;

	e_type	_type;
	bool	_charImpossible;


};

bool	isInt(std::string const & s);
bool	isFloat(std::string const & s);
bool	isDouble(std::string const & s);

#endif

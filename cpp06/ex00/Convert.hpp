#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class	Convert {

public:
	Convert(void);
	Convert(Convert const & src);
	~Convert(void);


	void	detectType(char *str);
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
	void	printDouble(void);

	Convert&	operator=(Convert const & rhs);

private:

	char	_c;
	int		_i;
	float	_f;
	double	_d;

	bool	_impossible;

};

bool	isInt(std::string const & s);
bool	isFloat(std::string const & s);
bool	isDouble(std::string const & s);

#endif

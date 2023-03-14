#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <map>
# include <iomanip>

class	BitcoinExchange {

public:

	BitcoinExchange(std::string input);

	void	readData(void);
	void	process(std::string const & input);
	void	processLine(std::string const & key, std::string const & value);

	std::string	getRightDate(std::string const & key);

	bool	dateIsValid(std::string const & key);
	bool	valueIsValid(float v);

	bool	getError(void) const;

private:


	std::map<std::string, std::string>	_data;
	bool	_error;

	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const & src);

	BitcoinExchange&	operator=(BitcoinExchange const & rhs);

};

#endif

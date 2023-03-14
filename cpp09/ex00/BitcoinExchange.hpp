#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <fstream>
# include <map>

class	BitcoinExchange {

public:

	BitcoinExchange(std::string input);

	void	readData(void);

private:


	std::map<std::string, std::string>	_data;

	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange const & src);

	BitcoinExchange&	operator=(BitcoinExchange const & rhs);

};

#endif

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input) : _error(false)
{
	readData();
	process(input);
}

void	BitcoinExchange::process(std::string const & input)
{
	std::ifstream	in(input);
	std::string		line;

	if (!in.is_open())
		_error = true;
	while (std::getline(in, line))
	{
		std::stringstream	split(line);
		std::string	key;
		std::string	value;

		split >> key;
		split >> value;
		split >> value;
		processLine(key, value);
	}
	in.close();
}

void	BitcoinExchange::readData(void)
{
	std::ifstream	in("./data.csv");
	std::string		line;

	while (in)
	{
		char	key[2048];
		char	value[2048];
		
		in.getline(key, 2048, ',');
		in.getline(value, 2048, '\n');

		//if (key[0] && value[0])
		//	std::cout << "key: " << key << ", value: " << value << std::endl;
		if (key[0] && value[0])
			_data.insert(std::make_pair(key, value));
	}
	in.close();
}

void	BitcoinExchange::processLine(std::string const & key, std::string const & value)
{
	if (!dateIsValid(key))
		return ;
	std::string	right_date = getRightDate(key);
	
	float	v;
	float	rate;

	//std::cout << "key: " << key << std::endl;
	//std::cout << "rate: " << _data[right_date] << std::endl;
	try
	{
		v = std::stof(value);
		rate = std::stof(_data[right_date]);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return ;
	}
	if (valueIsValid(v))
	{
		std::cout << key << " => " << value << " = " << rate * v << std::endl;
	}
}

std::string	BitcoinExchange::getRightDate(std::string const & key)
{
	if (_data.find(key) != _data.end())
		return (key);
	std::map<std::string, std::string>::iterator	it;
	it = _data.lower_bound(key);
	it--;
	return (it->first);
}

bool	BitcoinExchange::dateIsValid(std::string const & key)
{
	if (key == "date")
		return (false);

	std::stringstream	ss(key);
	std::tm	t = {};

	ss >> std::get_time(&t, "%Y-%m-%d");
	if (ss.fail())
	{
		std::cout << "Error: bad input => " << key << std::endl;
		return (false);
	}
	//std::cout << "date that worked: " << key << std::endl;
	return (true);
}

bool	BitcoinExchange::valueIsValid(float v)
{
	if (v < 0.0f)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (v > 1000.0f)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}


bool	BitcoinExchange::getError(void) const
{
	return (_error);
}

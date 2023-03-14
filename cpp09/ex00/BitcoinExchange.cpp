#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input)
{
	(void)input;
	readData();


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

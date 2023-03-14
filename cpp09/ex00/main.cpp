#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <input file>" << std::endl;
		return (0);
	}
	BitcoinExchange	btc(argv[1]);

	return (0);
}

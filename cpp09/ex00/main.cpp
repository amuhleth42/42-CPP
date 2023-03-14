#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}
	BitcoinExchange	btc(argv[1]);
	if (btc.getError())
		std::cout << "Error: could not open file." << std::endl;
	return (0);
}

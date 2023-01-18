#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) : type(src.type)
{
}

WrongAnimal::~WrongAnimal(void)
{
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Random animal sound..." << std::endl;
}

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
}

Animal::Animal(Animal const & src) : type(src.type)
{
}

Animal::~Animal(void)
{
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Random animal sound..." << std::endl;
}

Animal&	Animal::operator=(Animal const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(Animal const & src) : type(src.type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor" << std::endl;
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

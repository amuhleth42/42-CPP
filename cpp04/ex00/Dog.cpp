#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
}

Dog::Dog(Dog const & src)
{
	*this = src;
}

Dog::~Dog(void)
{
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof!" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	Animal::operator=(rhs);
	return (*this);
}

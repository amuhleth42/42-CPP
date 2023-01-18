#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
}

Dog::Dog(Dog& src)
{
	this->type = src.type;
}

Dog::~Dog(void)
{
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof!" << std::endl;
}

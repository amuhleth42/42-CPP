#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog: Woof woof!" << std::endl;
}

Dog&	Dog::operator=(Dog const & rhs)
{
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	return (*this);
}

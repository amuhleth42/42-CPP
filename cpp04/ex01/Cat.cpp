#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Meooowwwwww" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	this->_brain = rhs._brain;
	return (*this);
}

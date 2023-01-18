#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
}

Cat::Cat(Cat const & src)
{
	*this = src;
}

Cat::~Cat(void)
{
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Meooowwwwww" << std::endl;
}

Cat&	Cat::operator=(Cat const & rhs)
{
	Animal::operator=(rhs);
	return (*this);
}

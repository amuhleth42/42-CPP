#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
}

Cat::Cat(Cat& src)
{
	this->type = src.type;
}

Cat::~Cat(void)
{
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat: Meooowwwwww" << std::endl;
}

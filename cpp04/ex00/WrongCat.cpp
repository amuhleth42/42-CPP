#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& src)
{
	this->type = src.type;
}

WrongCat::~WrongCat(void)
{
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat: Meooowwwwww" << std::endl;
}

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor" << std::endl;
}

Brain&	Brain::operator=(Brain const & rhs)
{
	for ( int i = 0 ; i < 100 ; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : type(type)
{
}

std::string const &	AMateria::getType(void) const
{
	return (this->type);
}


void	AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	return (*this);
}

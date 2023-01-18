#include "Ice.hpp"

Ice::Ice(void) : AMateria()
{
}

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::~Ice(void)
{
}

Ice*	Ice::clone(void) const
{
	Ice* n = new Ice();
	return (n);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice&	Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

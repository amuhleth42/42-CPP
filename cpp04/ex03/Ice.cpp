#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	//std::cout << "Ice defaut constructor" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	//std::cout << "Ice copy constructor" << std::endl;
}

Ice::~Ice(void)
{
	//std::cout << "Ice destructor" << std::endl;
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

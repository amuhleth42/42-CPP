#include "AMateria.hpp"

AMateria::AMateria(void)
{
	//std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	//std::cout << "AMateria string constructor" << std::endl;
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria destructor" << std::endl;
}

std::string const &	AMateria::getType(void) const
{
	return (this->type);
}


void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Balek cette fonction ne sera jamais called" << std::endl;
}

AMateria&	AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	return (*this);
}

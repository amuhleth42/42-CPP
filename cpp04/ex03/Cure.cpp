#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	//std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	//std::cout << "Cure copy constructor" << std::endl;
}

Cure::~Cure(void)
{
}

Cure*	Cure::clone(void) const
{
	Cure* n = new Cure();
	return (n);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure&	Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

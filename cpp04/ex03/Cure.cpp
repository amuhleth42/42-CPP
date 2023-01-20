#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	//std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(Cure const & src)
{
	//std::cout << "Cure copy constructor" << std::endl;
	*this = src;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	//std::cout << "Cure string constructor" << std::endl;
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
	this->type = rhs.type;
	return (*this);
}

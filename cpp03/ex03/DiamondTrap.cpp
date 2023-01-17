
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->ClapTrap::_name << " has been created by default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap " << this->ClapTrap::_name << " has been created by string constructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap " << this->ClapTrap::_name << " has been created by copy constructor" << std::endl;
}


DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->ClapTrap::_name << " has been destroyed" << std::endl;
}


void	DiamondTrap::whoAmI(void)
{
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return (*this);
}

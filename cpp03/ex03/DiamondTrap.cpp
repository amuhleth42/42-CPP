
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->ClapTrap::_name << " has been created by default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const & name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
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
	std::cout << "My name: " << this->_name << "; my ClapTrap name: " << this->ClapTrap::_name << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;
	return (*this);
}

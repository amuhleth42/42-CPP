

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::FragTrap(FragTrap& src) : ClapTrap(src._name)
{
	*this = src;
	std::cout << "FragTrap " << this->_name << " has been created as a copy" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " has been destroyed !" << std::endl;
}


void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": High fives, guys?" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}



#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created by default" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_ep = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has been created by string" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& src) : ClapTrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << this->_name << " has been created as a copy" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed !" << std::endl;
}


void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has entered Gate Keeper Mode" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_attackDamage
			<< " points of damage !" << std::endl;
		this->_ep--;
	}
	else if (this->_hp > 0)
		std::cout << "No more EP left ! " << this->_name << " cannot attack !" << std::endl;
	else
		std::cout << this->_name << " is dead... :(" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

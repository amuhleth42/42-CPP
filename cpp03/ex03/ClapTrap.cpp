/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:18:24 by amuhleth          #+#    #+#             */
/*   Updated: 2022/11/02 17:23:07 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//	Constructors

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _ep(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hp(10), _ep(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " has been created as a copy" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " has been destroyed !" << std::endl;
}

//	Accessors

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHp(void) const
{
	return (this->_hp);
}

int	ClapTrap::getEp(void) const
{
	return (this->_ep);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "
			<< target << ", causing " << this->_attackDamage
			<< " points of damage !" << std::endl;
		this->_ep--;
	}
	else if (this->_hp > 0)
		std::cout << "No more EP left ! " << this->_name << " cannot attack !" << std::endl;
	else
		std::cout << this->_name << " is dead... :(" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << "Ouch! ClapTrap " << this->_name << " as taken " << amount << " damage points !" << std::endl;
		this->_hp -= amount;
		if (this->_hp <= 0)
			std::cout << "ClapTrap " << this->_name << " has died... :(" << std::endl;
	}
	else
		std::cout << "Please don't hurt corpses... C'est pas tres Charlie." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired and gained "
			<< amount << " hit points !" << std::endl;
		this->_ep--;
	}
	else if (this->_hp > 0)
		std::cout << "No more EP left ! " << this->_name << " cannot be repaired !" << std::endl;
	else
		std::cout << this->_name << " is dead... :(" << std::endl;
}



ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_ep = rhs.getEp();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

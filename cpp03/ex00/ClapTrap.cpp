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

ClapTrap::ClapTrap(std::string const & name) : _name(name)
{
}

ClapTrap::ClapTrap(ClapTrap & src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
}

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

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hp = rhs.getHp();
	this->_ep = rhs.getEp();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

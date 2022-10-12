/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:28:33 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:57:34 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( void )
{
	this->_weapon = NULL;
}

HumanB::HumanB( std::string name ) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB( void )
{
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}

void	HumanB::attack( void ) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon!" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon->getType() << std::endl;
	}
}

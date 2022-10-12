/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:20:51 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:45:14 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( Weapon &weapon ) : _weapon(weapon)
{
}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA( void)
{
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

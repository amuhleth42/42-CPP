/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:10:55 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:14:41 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
}

Weapon::~Weapon( void )
{
}

std::string&	Weapon::getType( void ) const
{
	std::string	&ref = this->_type;
	return (ref);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

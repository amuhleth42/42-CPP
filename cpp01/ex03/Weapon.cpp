/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:10:55 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:40:52 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void )
{
}

Weapon::Weapon( std::string type ) : _type(type)
{
}

Weapon::~Weapon( void )
{
}

std::string&	Weapon::getType( void )
{
	std::string	&ref = this->_type;
	return (ref);
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

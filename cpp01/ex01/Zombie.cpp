/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:16:56 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 13:53:08 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
}

Zombie::Zombie( std::string name ) : _name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died (again...)" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name )
{
	this->_name = name;
}

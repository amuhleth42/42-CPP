/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:18:34 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/14 12:39:40 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
}

Harl::~Harl( void ) {
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon... (debug)" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money... (info)" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free... (warning)" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now. (error)" << std::endl;
}

void	Harl::complain( std::string level )
{
	void	(Harl::*f[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	tab[4] = {"debug", "info", "warning", "error"};

	int	i = 0;
	while (tab[i] != level && i < 4)
		i++;
	if (i < 4)
		(this->*f[i])();
}

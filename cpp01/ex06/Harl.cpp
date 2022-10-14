/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:18:34 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/14 12:58:52 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
}

Harl::~Harl( void ) {
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon... (debug)" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money... (info)" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free... (warning)" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now. (error)" << std::endl;
}

void	Harl::complain_filter( std::string level )
{
	void	(Harl::*f[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (tab[i] != level && i < 4)
		i++;
	/*while (i < 4)
		(this->*f[i++])();*/

	switch (i)
	{
		case 0:
			(this->*f[0])();
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break ;
		case 1:
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break ;
		case 2:
			(this->*f[2])();
			(this->*f[3])();
			break ;
		case 3:
			(this->*f[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:14:36 by amuhleth          #+#    #+#             */
/*   Updated: 2022/11/02 17:21:24 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	c("Karl");
	ScavTrap	s("John");
	ScavTrap	cpy(s);
	ClapTrap	magic(s);

	std::cout << std::endl;


	c.attack("Pop-Hip de Stupeflip");

	s.attack("King Ju");
	s.guardGate();
	s.beRepaired(2);
	s.takeDamage(8);

	std::cout << std::endl;

	return (0);
}

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

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a;
	DiamondTrap	b("Henri");
	DiamondTrap	c(b);

	std::cout << std::endl;

	c.whoAmI();
	c.attack("Stupeflip");

	c.guardGate();
	c.highFivesGuys();

	std::cout << std::endl;
	return (0);
}

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
	std::cout << std::endl;
	DiamondTrap	b("Henri");
	std::cout << std::endl;
	DiamondTrap	c(b);
	std::cout << std::endl;

	std::cout << std::endl;
	return (0);
}

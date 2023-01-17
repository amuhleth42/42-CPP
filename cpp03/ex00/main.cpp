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

int	main(void)
{
	ClapTrap	a("Karl");
	ClapTrap	b("Egon");
	ClapTrap	c(a);

	c.attack("Pop-Hip de Stupeflip");
	c.beRepaired(2);
	c.takeDamage(6);
	c.beRepaired(2);
	c.takeDamage(8);

	c.attack("King Ju");
	c.beRepaired(2);
	c.takeDamage(8);

	return (0);
}

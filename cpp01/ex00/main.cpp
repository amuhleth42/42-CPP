/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:28:36 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 13:33:10 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	z1 = Zombie("Didier");
	Zombie	*z2 = newZombie("Jean-Luc");

	z1.announce();
	z2->announce();
	randomChump("Martine");
	delete z2;
	return (0);
}

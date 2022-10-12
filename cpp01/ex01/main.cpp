/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:28:36 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 13:51:48 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*tab;
	int	n = 8;

	tab = zombieHorde(n, "Raoul");
	for (int i = 0 ; i < 8 ; i++)
		tab[i].announce();
	delete [] tab;
	return (0);
}

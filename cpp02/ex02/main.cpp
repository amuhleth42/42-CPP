/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:13:24 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 17:07:30 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	bool	b1;
	bool	b2;
	Fixed a( 42.4f);
	Fixed b( 20 );
	Fixed c( 42.4f );

	b1 = (a == b);
	b2 = (a == c);
	std::cout << "A == B: " << b1 << std::endl;
	std::cout << "A == C: " << b2 << std::endl;

	return 0;
}

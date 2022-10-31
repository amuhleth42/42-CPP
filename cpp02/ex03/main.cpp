/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:13:24 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 19:01:15 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.cpp"

int main( void ) 
{
	Point	a(0.0f, 0.0f);
	Point	b(0.0f, 10.0f);
	Point	c(10.5f, 0.0f);

	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << "C: " << c << std::endl;

	std::cout << "Triangle area: " << triangle_area(a, b, c) << std::endl;

	return (0);
}

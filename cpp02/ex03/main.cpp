/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:13:24 by amuhleth          #+#    #+#             */
/*   Updated: 2022/11/02 14:19:16 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) 
{
	Point	a(0.0f, 0.0f);
	Point	b(0.0f, 20.0f);
	Point	c(20.0f, 0.0f);

	Point	p1(1.0f, 1.0f);
	Point	p2(20.0f, 20.0f);
	Point	p3(0.0f, 0.0f);
	Point	p4(0.0f, 5.0f);
	Point	p5(0.1f, 5.0f);

	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;
	std::cout << "C: " << c << std::endl;

	std::cout << "Triangle area: " << triangle_area(a, b, c) << std::endl;
	std::cout << " P1 Result: " << bsp(a, b, c, p1) << std::endl;
	std::cout << " P2 Result: " << bsp(a, b, c, p2) << std::endl;
	std::cout << " P3 Result: " << bsp(a, b, c, p3) << std::endl;
	std::cout << " P4 Result: " << bsp(a, b, c, p4) << std::endl;

	return (0);
}

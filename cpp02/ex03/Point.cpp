/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:57:28 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 19:02:07 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void )
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point( float const x, float const y )
{
	this->_x = x;
	this->_y = y;
}

Point::~Point( void )
{
}

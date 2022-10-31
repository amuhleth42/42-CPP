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

Point::Point( float const x, float const y ) : _x(x), _y(y)
{
}

Point::Point( Point const & src )
{
	this->_x = src.getX();
	this->_y = src.getY();
}

Point::~Point( void )
{
}

Fixed	Point::getX( void ) const
{
	return (this->_x);
}

Fixed	Point::getY( void ) const
{
	return (this->_y);
}

std::ostream	&operator<<( std::ostream &out, Point const & p )
{
	out << "X: " << p.getX() << ", Y: " << p.getY();
	return (out);
}

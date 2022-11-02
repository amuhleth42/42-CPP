/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:37 by amuhleth          #+#    #+#             */
/*   Updated: 2022/11/02 14:44:05 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

public:

	Point( void );
	Point( float const x, float const y);
	Point( Point const & src );
	~Point( void );

	Point&	operator=(Point const & rhs);

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;


private:

	Fixed	_x;
	Fixed	_y;


};

std::ostream	&operator<<( std::ostream &out, Point const & point );


Fixed	triangle_area( Point const p1, Point const p2, Point const p3 );
bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif

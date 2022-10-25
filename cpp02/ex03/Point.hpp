/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:37 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 18:57:44 by amuhleth         ###   ########.fr       */
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

	Fixed&	operator=(Fixed const & rhs);


private:

	Fixed	_x;
	Fixed	_y;


};

#endif

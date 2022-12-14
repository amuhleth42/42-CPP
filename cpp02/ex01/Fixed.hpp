/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:06:20 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/19 01:53:30 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( const Fixed& src );
	Fixed( int const n );
	Fixed( float const n );
	~Fixed( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed&	operator=(const Fixed& rhs);

private:

	int					_value;
	static int const	_point_position = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & n);

#endif

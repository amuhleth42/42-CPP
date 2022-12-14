/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:06:20 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/19 00:17:59 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed &src );
	~Fixed( void );

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed	&operator=(Fixed &rhs);

private:

	int					_value;
	static int const	_point_position = 8;
};

#endif

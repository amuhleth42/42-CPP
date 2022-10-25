/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:06:20 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 18:49:06 by amuhleth         ###   ########.fr       */
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

	static Fixed	&min(Fixed & r1, Fixed & r2);
	static Fixed	min(Fixed const & r1, Fixed const & r2);
	static Fixed	&max(Fixed & r1, Fixed & r2);
	static Fixed	max(Fixed const & r1, Fixed const & r2);

	Fixed&	operator=(Fixed const & rhs);

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator>(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;

	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

private:

	int					_value;
	static int const	_point_position = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const & n);

#endif

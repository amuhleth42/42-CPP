/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:14:14 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 15:14:23 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and destructors

Fixed::Fixed( void )
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src )
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const n )
{
	this->_value = (n << 8);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const n )
{
	this->_value = (int)roundf(n * (1 << this->_point_position));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

// Accessors

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

// Member functions


float	Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_point_position));
}

int	Fixed::toInt( void ) const
{
	return (this->_value >> 8);
}

// Operator overloads

Fixed	&Fixed::operator=(const Fixed& rhs)
{
	this->_value = rhs.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

//	Arithmethic

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() * rhs.getRawBits() / (1 << this->_point_position));
	return (result);
}

//	Comparison


//	-crementation

//	Stream

std::ostream&	operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return (o);
}

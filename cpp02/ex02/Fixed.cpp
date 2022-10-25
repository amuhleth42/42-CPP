/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:14:14 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/25 18:00:48 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and destructors

Fixed::Fixed( void )
{
	this->_value = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src )
{
	*this = src;
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( int const n )
{
	this->_value = (n << 8);
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const n )
{
	this->_value = (int)roundf(n * (1 << this->_point_position));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

// Accessors

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
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
/*
static Fixed	Fixed::min(Fixed & r1, Fixed & r2)
{
}

static Fixed	Fixed::min(Fixed const & r1, Fixed const & r2)
{
}

static Fixed	Fixed::max(Fixed & r1, Fixed & r2)
{
}

static Fixed	Fixed::max(Fixed & r1, Fixed & r2)
{
}

static Fixed::min(Fixed & r1, Fixed & r2)
{
}*/

/*************      OPERATOR OVERLOADS           ************/

Fixed	&Fixed::operator=(const Fixed& rhs)
{
	this->_value = rhs.getRawBits();
	//std::cout << "Copy assignment operator called" << std::endl;
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

	result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_point_position);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed result;

	result.setRawBits((this->getRawBits() << this->_point_position) / rhs.getRawBits());
	return (result);
}

//	Comparison

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->toInt() == rhs.toInt());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toInt() != rhs.toInt());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->toInt() < rhs.toInt());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toInt() <= rhs.toInt());
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->toInt() > rhs.toInt());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toInt() >= rhs.toInt());
}

//	-crementation

Fixed	Fixed::operator++(int)
{
	Fixed	result(*this);

	this->_value++;
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result(*this);

	this->_value--;
	return (result);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

//	Stream

std::ostream&	operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return (o);
}

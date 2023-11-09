/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/08 11:54:01 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}


Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = (src.getRawBits());
	return (*this);
}

// ---------- // 

Fixed::Fixed(int arg_value_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->value =  arg_value_int << this->fract;
}

Fixed::Fixed(float arg_value_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->value =  (int)(round(arg_value_float * (1 << this->fract)));
}

float Fixed::toFloat( void ) const
{
	float	f;
	f = (float) this->value / (1 << this->fract);
	return (f);
}

int Fixed::toInt( void ) const
{
	return(this->value >> this->fract);
}

std::ostream & operator<<( std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return (o);
}


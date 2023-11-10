/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 09:40:52 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}


Fixed::Fixed()
{
	// std::cout << "Default constructor called" <<std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy constructor called" <<std::endl;
	*this = src;
}

Fixed & Fixed::operator=( Fixed const & src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->value = (src.getRawBits());
	return (*this);
}

// ---------- // 

Fixed::Fixed(int arg_value_int)
{
	// std::cout << "Int constructor called" << std::endl;
	this->value =  arg_value_int << this->fract;
}

Fixed::Fixed(float arg_value_float)
{
	// std::cout << "Float constructor called" << std::endl;
	this->value =  (int)(roundf(arg_value_float * (1 << this->fract)));
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

// ---------- // 


bool Fixed::operator>( Fixed const & cmp)
{
	if (this->toFloat() > cmp.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<( Fixed const & cmp)
{
	if (this->value < cmp.value)
		return (true);
	return (false);
}

bool Fixed::operator>=( Fixed const & cmp)
{
	if (this->value >= cmp.value)
		return (true);
	return (false);
}

bool Fixed::operator<=( Fixed const & cmp)
{
	if (this->value <= cmp.value)
		return (true);
	return (false);
}

bool Fixed::operator==( Fixed const & cmp)
{
	if (this->value == cmp.value)
		return (true);
	return (false);
}

bool Fixed::operator!=( Fixed const & cmp)
{
	if (this->value != cmp.value)
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const & add)
{
	Fixed a (this->toFloat() + add.toFloat());
	return (a);
}

Fixed Fixed::operator-(Fixed const & add)
{
	Fixed a (this->toFloat() - add.toFloat());
	return (a);
}

Fixed Fixed::operator*(Fixed const & add)
{
	Fixed a (this->toFloat() * add.toFloat());
	return (a);
}

Fixed Fixed::operator/(Fixed const & add)
{
	Fixed a (this->toFloat() / add.toFloat());
	return (a);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;

	(this->value) +=1 ;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	(this->value) -=1 ;
	return (temp);
}

Fixed & Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}

Fixed &Fixed::min(Fixed &f, Fixed &s)
{
	if (f < s)
		return (f);
	return (s);
}

const Fixed &Fixed::min(const Fixed &f, const Fixed &s)
{
	Fixed a(f);
	Fixed b(s);
	
	if (a < b)
		return (f);
	return (s);
}

Fixed &Fixed::max(Fixed &f, Fixed &s)
{
	if (f > s)
		return (f);
	return (s);
}

const Fixed &Fixed::max(Fixed const &f, Fixed const &s)
{
	Fixed a(f);
	Fixed b(s);
	
	if (a > b)
		return (f);
	return (s);
}

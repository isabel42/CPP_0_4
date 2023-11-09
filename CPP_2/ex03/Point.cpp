/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/08 21:51:39 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Fixed const Point::getX( void ) const 
{
	return (this->x);
}

Fixed const Point::getY( void ) const 
{
	return (this->y);
}

Point::Point(): x(0), y(0)
{
	// std::cout << "Default constructor called" <<std::endl;
}

Point::Point(float const x, float const y): x(x), y(y)
{
}

Point::Point(Fixed const x, Fixed const y): x(x), y(y)
{
}		

Point::~Point()
{
	// std::cout << "Destructor called" <<std::endl;
}

Point::Point(Point const &src): x(src.getX()), y(src.getY())
{
	// std::cout << "Copy constructor called" <<std::endl;
}

Point & Point::operator=( Point & src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	return (src);
}

Fixed Point::operator|( Point const & src)
{
	Fixed a (this->x);
	Fixed b (this->y);

	return ((a * src.y) - (b * src.x));
}





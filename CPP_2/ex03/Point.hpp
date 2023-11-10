/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/08 21:51:44 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <iomanip>
# include <cmath>
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const x; 
		Fixed const y; 

	public:
		Point();
		Point(float const x, float const y);
		Point(Fixed const x, Fixed const y);
		~Point();
		Point (Point const &src);
		Point & operator=( Point & src);
		Fixed operator|( Point const & src);
		// Point operator-( Point const & src);
		Fixed const getX (void) const; 
		Fixed const getY (void) const; 
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


# endif
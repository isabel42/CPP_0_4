/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:37:50 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 09:27:02 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// https://www.youtube.com/watch?v=HYAgJN3x4GA

Fixed	get_w1( Point const a, Point const b, Point const c, Point const p)
{
	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = p.getX();
	Fixed Py = p.getY();

	
	Fixed	num = (Ax * (Cy - Ay)) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay);
	Fixed	denum =  (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay);
	Fixed	f = num / denum;
	return (f);
}

Fixed	get_w2(Fixed w1, Point const a, Point const b, Point const c, Point const p)
{
	Fixed Ax = a.getX();
	Fixed Ay = a.getY();
	Fixed Bx = b.getX();
	Fixed By = b.getY();
	Fixed Cx = c.getX();
	Fixed Cy = c.getY();
	Fixed Px = p.getX();
	Fixed Py = p.getY();

	Fixed	num = Py - Ay - w1 * (By - Ay);
	Fixed	denum = Cy - Ay;
	Fixed 	f = num / denum;
	return (f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed w1 = get_w1(a, b, c, point);
	Fixed w2 = get_w2(w1, a, b, c, point);

	if (w1 > 0 && w2 > 0 && w2 + w1 < 1)
		return (true);
	return (false);
}
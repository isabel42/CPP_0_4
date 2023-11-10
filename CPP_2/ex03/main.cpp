/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:28:27 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/06 17:32:56 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point const a(0,0);
	Point const b(5,0);
	Point const c(0,5);
	Point const p(0,0);
	if (bsp( a, b, c, p))
		std::cout << "IN" << std::endl;
	else 
		std::cout << "OUT" << std::endl;
	return (0);
}
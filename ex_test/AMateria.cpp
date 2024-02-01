/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:28:16 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 16:45:19 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria constructor with type called." << std::endl;
}

AMateria & AMateria::operator=(AMateria const &src)
{
	std::cout << "Surcharge operator = called." << std::endl;
	this->type = src.type;
	return (*this);
}
AMateria::AMateria(AMateria const &src) : type(src.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	std::cout << "getType fct called."<< std::endl;
	return (this->type);
}

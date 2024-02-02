/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:28:16 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 16:01:18 by itovar-n         ###   ########.fr       */
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
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::string target_name = target.getName();
	std::cout << "An unknown Materia is used against " << target_name << " *" << std::endl;	
}



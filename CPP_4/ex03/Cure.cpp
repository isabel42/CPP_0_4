/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:36:42 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 16:07:10 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria ("cure")
{
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called." << std::endl;
}

Cure & Cure::operator=(Cure const &src)
{
	std::cout << "Cure operator = called." << std::endl;
	this->type = src.type;
	return (*this);
}

Cure::Cure(Cure const &src)
{
	std::cout << "Cure copy constructor called." << std::endl;  
	this->type = src.type;
}

Cure * Cure::clone() const{
	Cure *cln = new Cure;
	return (cln);
}

void Cure::use (ICharacter &target)
{
	std::string name = target.getName();
	std::cout << "* heals " << name << "'s wounds *" << std::endl;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:36:42 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 15:45:31 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria ("ice")
{
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called." << std::endl;
}

Ice & Ice::operator=(Ice const &src)
{
	std::cout << "Ice operator = called." << std::endl;
	this->type = src.type;
	return (*this);
}

Ice::Ice(Ice const &src)
{
	this->type = src.type;
	std::cout << "Ice copy constructor called." << std::endl;
}

Ice * Ice::clone() const{
	Ice *cln = new Ice;
	return (cln);
}

void Ice::use (ICharacter &target)
{
	std::string target_name = target.getName();
	std::cout << "* shots an ice bot at " << target_name << " *" << std::endl;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/11 10:44:49 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : type("ice")
{
	std::cout << "Ice default constructor called." <<std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called." <<std::endl;
}

Ice::Ice(Ice const &src)
{
	std::cout << "Ice Copy constructor called." <<std::endl;
	*this = src;
}

Ice & Ice::operator=( Ice const & src)
{
	std::cout << "Ice Copy assignment operator called from " << src.getType() << "." << std::endl;
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << "* shoots an ice bolt at " << target_name << std::endl;
}
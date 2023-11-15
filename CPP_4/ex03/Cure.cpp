/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/11 10:44:49 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : type("Cure")
{
	std::cout << "Cure default constructor called." <<std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called." <<std::endl;
}

Cure::Cure(Cure const &src)
{
	std::cout << "Cure Copy constructor called." <<std::endl;
	*this = src;
}

Cure & Cure::operator=( Cure const & src)
{
	std::cout << "Cure Copy assignment operator called " << src.getType() << "." << std::endl;
	return (*this);
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << "* heals " << target_name << "wounds" << std::endl;
}
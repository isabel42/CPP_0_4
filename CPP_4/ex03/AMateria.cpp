/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/11 10:44:49 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia default constructor called." <<std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Materia Destructor called." <<std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "Materia Copy constructor called." <<std::endl;
	*this = src;
}

AMateria & AMateria::operator=( AMateria const & src)
{
	std::cout << "Materia Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

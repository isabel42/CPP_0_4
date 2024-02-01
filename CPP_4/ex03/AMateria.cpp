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

AMateria::AMateria(std::string const & type): type(type)
{
	std::cout << "AMateria based on type constructor called." <<std::endl;
}

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called." <<std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called." <<std::endl;
}

AMateria::AMateria(AMateria const &src): type(src.type)
{
	std::cout << "AMateria Copy constructor called." <<std::endl;
}

AMateria & AMateria::operator=( AMateria const & src)
{
	std::cout << "AMateria Copy assignment operator called from " << src.type << "." << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const
{
	std::cout << "AMateria getType called." << std::endl;
	return(this->type);
}


void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}

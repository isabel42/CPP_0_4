/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." <<std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." <<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Copy constructor called." <<std::endl;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src)
{
	std::cout << "WrongAnimal Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimals do many sounds." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

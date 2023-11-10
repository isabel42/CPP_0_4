/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." <<std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." <<std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy constructor called." <<std::endl;
	*this = src;
}

Animal & Animal::operator=( Animal const & src)
{
	std::cout << "Animal Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animals do many sounds." << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

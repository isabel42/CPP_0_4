/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog() : Animal ()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called." <<std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." <<std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called." <<std::endl;
	*this = src;
}

Dog & Dog::operator=( Dog const & src)
{
	std::cout << "Dog Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dogs bark." << std::endl;
}

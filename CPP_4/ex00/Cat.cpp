/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat() : Animal ()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called." <<std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." <<std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called." <<std::endl;
	*this = src;
}

Cat & Cat::operator=( Cat const & src)
{
	std::cout << "Cat Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cats meow." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/10 10:12:58 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal ()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called." <<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called." <<std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat Copy constructor called." <<std::endl;
	*this = src;
}

WrongCat & WrongCat::operator=( WrongCat const & src)
{
	std::cout << "WrongCat Copy assignment operator called." << std::endl;
	this->type = src.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCats meow." << std::endl;
}

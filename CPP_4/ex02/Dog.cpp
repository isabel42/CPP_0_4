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

Dog::Dog() : AAnimal ()
{
	this->type = "Dog";
	this->cerveau = new Brain();
	std::cout << "Dog default constructor called." <<std::endl;
}

Dog::~Dog()
{
	delete this->cerveau;
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
	this->cerveau = new Brain(*(src.cerveau));
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dogs bark." << std::endl;
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->cerveau) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_dog.cerveau) << std::endl;
	std::cout << std::endl;
	// std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	// for (int i = 0; i < 100; i++)
	// 	std::cout << "-";
	// std::cout << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ((this->cerveau)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.cerveau)->getIdeas())[i] << std::endl;
	// std::cout << std::endl;
}
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

Cat::Cat() : AAnimal ()
{
	this->type = "Cat";
	this->cerveau = new Brain();
	std::cout << "Cat default constructor called." <<std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." <<std::endl;
	delete this->cerveau;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called." <<std::endl;
	*this = src;
}

Cat & Cat::operator=( Cat const & src)
{
	this->type = src.type;
	this->cerveau = new Brain(*(src.cerveau));
	return (*this);
	std::cout << "Cat Copy assignment operator called. Cat with new brain created." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cats meow." << std::endl;
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->cerveau) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.cerveau) << std::endl;
	std::cout << std::endl;
	// std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	// for (int i = 0; i < 100; i++)
	// 	std::cout << "-";
	// std::cout << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	std::cout << ((this->cerveau)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_dog.cerveau)->getIdeas())[i] << std::endl;
	// std::cout << std::endl;
}


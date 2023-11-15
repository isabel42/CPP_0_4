/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "ZZZzzZZ";
	std::cout << "Brain default constructor called." <<std::endl;
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Brain Destructor called." <<std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain Copy constructor called." <<std::endl;
	*this = src;
}

Brain & Brain::operator=( Brain const & src)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i] + " stolen";
	return (*this);
	std::cout << "Brain Copy assignment operator called. Ideas have been copied to the new brain." << std::endl;
}

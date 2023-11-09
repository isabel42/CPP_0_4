/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 14:37:37 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"


FragTrap::FragTrap(): ClapTrap() 
{
	this->name = "Default";
	this->hit = 100;
	this->energy = 50;
	this->a_dammge = 20;
	std::cout << "FragTrap: Default constructor called" <<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap() 
{
	this->name = name;
	this->hit = 100;
	this->energy = 50;
	this->a_dammge = 20;
	std::cout << "FragTrap: Constructor based on name called" <<std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called" <<std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap: Copy constructor called" <<std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=( FragTrap const & src)
{
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	this->name = src.name;
	this->hit = src.hit;
	this->energy = src.energy;
	this->a_dammge = src.a_dammge;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->energy <= 0)
		std::cout << "FragTrap " << this->name << " cannot attack as it has 0 energy points" << std::endl;
	else if (this->hit <= 0)
		std::cout << "FragTrap " << this->name << " cannot attack as it is dead with 0 hit points" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->a_dammge << " points of damage!" << std::endl;
		this->energy--;
	}
}


void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << ": You want a high five?\n\t*WHAMM*\nHere you go." << std::endl;
	
}

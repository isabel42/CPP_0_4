/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 14:19:58 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap() 
{
	this->name = "Default";
	this->hit = 100;
	this->energy = 50;
	this->a_dammge = 20;
	this->guarding = false;
	std::cout << "ScavTrap: Default constructor called" <<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap() 
{
	this->name = name;
	this->hit = 100;
	this->energy = 50;
	this->a_dammge = 20;
	this->guarding = false;
	std::cout << "ScavTrap: Constructor based on name called" <<std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called" <<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap: Copy constructor called" <<std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & src)
{
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	this->name = src.name;
	this->hit = src.hit;
	this->energy = src.energy;
	this->a_dammge = src.a_dammge;
	this->guarding = src.guarding;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy <= 0)
		std::cout << "ScavTrap " << this->name << " cannot attack as it has 0 energy points" << std::endl;
	else if (this->hit <= 0)
		std::cout << "ScavTrap " << this->name << " cannot attack as it is dead with 0 hit points" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->a_dammge << " points of damage!" << std::endl;
		this->energy--;
	}
}


void ScavTrap::guardGate()
{
	if (!this->guarding)
	{
		this->guarding = true;
		std::cout << "ScavTrap: " << this->name << " s is now in Gate keeper mode." << std::endl;
	}
	else
		std::cout << "ScavTrap: " << this->name << " is already keeping the gate." << std::endl;
}

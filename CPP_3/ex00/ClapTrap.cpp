/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 11:24:23 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"


ClapTrap::ClapTrap(): name("Default"), hit (10), energy(10), a_dammge(0)
{
	std::cout << "Default constructor called" <<std::endl;
}

ClapTrap::ClapTrap(std::string name): name (name), hit (10), energy(10), a_dammge(0)
{
	std::cout << "Constructor based on name called" <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" <<std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = src;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = src.name;
	this->hit = src.hit;
	this->energy = src.energy;
	this->a_dammge = src.a_dammge;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy <= 0)
		std::cout << "ClapTrap " << this->name << " cannot attack as it has 0 energy points" << std::endl;
	else if (this->hit <= 0)
		std::cout << "ClapTrap " << this->name << " cannot attack as it is dead with 0 hit points" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->a_dammge << " points of damage!" << std::endl;
		this->energy--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit > amount)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << "points of damage." << std::endl;
		this->hit = this->hit - amount;
	}
	else if (this->hit == 0)
		std::cout << "ClapTrap " << this->name << " is already dead with 0 hit points." << std::endl;
	else if (this->hit <= amount)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << "points of damage and dies." << std::endl;
		this->hit = 0;
	}
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy <= 0)
		std::cout << "ClapTrap " << this->name << " cannot be repaired as it has 0 energy points." << std::endl;
	else if (this->hit <= 0)
		std::cout << "ClapTrap " << this->name << " cannot be repaired as it is dead with 0 hit points." << std::endl;
	else
	{
		if (this->energy < 10)
		{
			std::cout << "ClapTrap " << this->name << " repairs itself with " << amount << " hit points." << std::endl;
			this->hit = this->hit + amount;
		}
		else
			std::cout << "ClapTrap " << this->name << " has already full hit points. It spent one energy point in vain." << std::endl;
		this->energy--;
	}
}
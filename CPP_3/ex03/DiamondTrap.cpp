/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:19:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 15:32:17 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap() 
{
	this->name = "DefalutDT";
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->a_dammge = FragTrap::a_dammge;
	std::cout << "DiamondTrap: Default constructor called" <<std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_cap_trap") 
{
	this->name = name;
	this->hit = FragTrap::hit;
	this->energy = ScavTrap::energy;
	this->a_dammge = FragTrap::a_dammge;
	std::cout << "DiamondTrap: Constructor based on name called" <<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" <<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap: Copy constructor called" <<std::endl;
	*this = src;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & src)
{
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	this->name = src.name + "_clap_trap";
	this->hit = src.hit;
	this->energy = src.energy;
	this->a_dammge = src.a_dammge;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hello i am a DiamondTrap named " << this->name <<
	" and i am originated from the ClapTrap named " << ClapTrap::name << "." <<
	std::endl;
}

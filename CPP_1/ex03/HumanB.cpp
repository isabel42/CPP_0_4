/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:41:13 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/27 16:29:22 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	// std::cout << "HumanB: " << this->name << " has ben destroyed" << std::endl;
}

void HumanB::attack() const
{
	if(!this->weapon)
		std::cout << this->name << " cannot attack, it has no weapon"<< std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
	this->weapon = &weap;
}

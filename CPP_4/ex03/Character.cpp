/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:15:04 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 15:58:30 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("Default")
{
	std::cout << "Character default constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
}

Character::~Character()
{
	for(int i = 0 ; i < 4 ; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
	}
	std::cout << "Character " << this->name << " default destructor called." << std::endl;
}

Character::Character(std::string given_name) : name(given_name)
{
	std::cout << "Character based on name " << this->name << " constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
}

Character & Character::operator=(Character const & src)
{
	std::cout << "Character assignment operator overload called." << std::endl;
	this->name = src.name;
	for(int i = 0 ; i < 4 ; i++)
	{
		if (this->stock[i] != NULL)
		{
			delete this->stock[i];
			this->stock[i] = NULL;
		}
		if (src.stock[i] != NULL)
			this->stock[i] = src.stock[i]->clone();
	}
	return (*this);
}

Character::Character(Character const & src) : name(src.name)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = src;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia does not exist!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] == NULL)
		{
			this->stock[i] = m;
			std::cout << "Materia " << m->getType() << " equipped in position " << i << "." << std::endl;
			return ;
		}
	}
	std::cout << "Character is full and cannot hold any more materias." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (this->stock[idx] != NULL)
	{
		this->stock[idx] = NULL;
		std::cout << "Position "<< idx << " unequiped." << std::endl;	
	}
	else
		std::cout << "Position stated is already empty." << std::endl;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	if (stock[idx] != NULL)
	{
		this->stock[idx]->use(target);
		std::cout << "Material in idx " << idx << "used by character " << target.getName() << ":";
	}
	else
		std::cout << "Material in idx " << idx << "or " << target.getName() << " does not exit." << std::endl;
}

void	Character::displayInventory(void) const
{
	std::cout << this->name << "'s inventory contains:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << "\t[" << i << "] ";
		if (this->stock[i] == NULL)
			std::cout << "Empty slot.";
		else
			std::cout << this->stock[i]->getType() << " materia.";
		std::cout << std::endl;
	}
	return ;
}

void	Character::setName(std::string const & newName)
{
	this->name = newName;
	return ;
}
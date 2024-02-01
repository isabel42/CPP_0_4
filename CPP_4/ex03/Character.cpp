/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:34:15 by itovar-n          #+#    #+#             */
/*   Updated: 2024/01/22 15:58:15 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() : stock(new AMateria[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->stock[i] = NULL;
		i++;
	}
	std::cout << "Character constructor called." <<std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called." <<std::endl;
}

Character::Character(std::string name) : name(name), stock(new AMateria[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		this->stock[i] = NULL;
		i++;
	}
	std::cout << "Character constructor based on name called." <<std::endl;
}

Character & Character::operator=(Character const &src)
{
	std::cout << "Character copy assignment operator called." << std:::endl;
	return(*this);
}

Character::Character(Character const &src)
{
	std::cout << "Character copy constructor called." <<std::endl;
	*this = src;
}

std::string const & Character::getName() const
{
	std::string &cp_name;

	cp_name = this->name;
	std::cout << "Get name fct called." <<std::endl;
	return (cp_name);
}

void Character::equip(AMateria* m)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4 && m[j])
	{
		if (this->stock[i] == NULL)
		{
			this->stock[i] = m[j];
			j++;
		}
		i++;
	}
	std::cout << "Equip fct called." <<std::endl;
	
}

void Character::unequip(int idx)
{
	this->stock[idx] = NULL;
}


void Character::use(int idx, ICharacter& target)
{
	this->stock[idx].use;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:15:04 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 17:38:03 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character default destructor called" << std::endl;
}

Character & Character::operator=(Character const & src)
{
	this->name
}

class Character : private ICharacter
{
	private:
		AMateria stock[4];
		std::string const name;
		
	public:
		Character();
		Character(std::string given_name);
		~Character();
		Character & operator=(Character const & src);
		Character(Character const & src);
};
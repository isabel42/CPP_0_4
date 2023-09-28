/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:01:07 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/27 16:27:03 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon( std::string newtype)
{
	this->setType(newtype);
}

Weapon::~Weapon()
{

}

std::string const &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType( std::string newtype)
{
	this->type = newtype;
}
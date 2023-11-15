/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:34:15 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/15 17:41:49 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() : ICharacter(), stock(new AMateria*[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}
Character::Character(std::string name) : ICharacter(), name (name), stock(new AMateria*[4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
}
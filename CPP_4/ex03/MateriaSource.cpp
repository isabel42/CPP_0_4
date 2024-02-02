/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:48:13 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 15:40:44 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->stock[i] = NULL;
	std::cout << "MateriaSource constructor called." << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] != NULL)
			delete this->stock[i];
	}
	std::cout << "MateriaSource destructor called." << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & src)
{
	std::cout << "MateriaSource assignment operator overload called." << std::endl;
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

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

void	MateriaSource::learnMateria(AMateria * materia)
{
	if (!materia)
	{
		std::cout << "Materia does not exist!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i] == NULL)
		{
			this->stock[i] = materia;
			std::cout << "MateriaSource learned the " << materia->getType() << " ." << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource can't learn any more materia." << std::endl;
	delete materia;
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i]
			&& this->stock[i]->getType() == type)
		{
			std::cout << "MateriaSource creating " << type << " materia." << std::endl;
			return (this->stock[i]->clone());
		}
	}
	std::cout << "MateriaSource does not know the type \"" << type << "\"." << std::endl;
	return (NULL);
}

void	MateriaSource::displayKnownRecipes(void)
{
	std::cout << "MateriaSource knows the following stock:" << std::endl;
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
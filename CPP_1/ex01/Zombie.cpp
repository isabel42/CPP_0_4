/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:18:40 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/27 11:46:53 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << this->name  << " has been destroyed." << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << std::flush;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}	

void Zombie::set_name(std::string name)
{
	this->name = name;
}
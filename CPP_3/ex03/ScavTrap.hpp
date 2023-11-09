/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 14:50:43 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
	private:
		bool guarding;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap (ScavTrap const &src);
		~ScavTrap();
		ScavTrap & operator=( ScavTrap const & src);
		void attack(const std::string & target);
		void guardGate();
		
	
};

# endif
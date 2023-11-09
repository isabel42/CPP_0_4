/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 14:37:47 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap (FragTrap const &src);
		~FragTrap();
		FragTrap & operator=( FragTrap const & src);
		void attack(const std::string & target);
		void highFivesGuys();
		
	
};

# endif
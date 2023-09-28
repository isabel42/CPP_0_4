/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:15:13 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/26 17:11:57 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{
	private: 
		std::string name;
	
	public:
		Zombie();
		~Zombie();
		void set_name(std::string name);
		void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

# endif
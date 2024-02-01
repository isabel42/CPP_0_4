/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:05:27 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 17:15:52 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : private ICharacter
{
	private:
		AMateria stock[4];
		std::string name;
		
	public:
		Character();
		~Character();
		Character & operator=(Character const & src);
		Character(Character const & src);
};

#endif
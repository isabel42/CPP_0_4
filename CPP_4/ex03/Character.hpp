/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:05:27 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 15:58:15 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria * stock[4];
		std::string name;
		
	public:
		Character();
		~Character();
		Character & operator=(Character const & src);
		Character(Character const & src);
		Character(std::string given_name);


		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		void displayInventory(void) const;
		void setName(std::string const & newName);
};

#endif
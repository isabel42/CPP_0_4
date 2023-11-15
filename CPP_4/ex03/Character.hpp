/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:05:54 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/15 17:43:03 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "ICHaracter.hpp"
# include "Amateria.hpp"

class	AMateria;

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria **stock;
		
	public:
		Character();
		Character(const std::string &name);
		~Character();
		Character & operator=(Character const &src);
		Character (Character const &src);
		
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
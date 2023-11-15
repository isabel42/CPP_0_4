/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/11 10:45:06 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <iomanip>
# include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;

	public:
		Cure();
		Cure (Cure const &src);
		~Cure();
		Cure & operator=( Cure const & src);

		Cure* clone() const;
		void use(ICharacter& target);
	
};

# endif
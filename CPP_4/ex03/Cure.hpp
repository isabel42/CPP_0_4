/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:28:30 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 15:35:43 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure & operator=(Cure const & src);
		Cure (Cure const &src);

		Cure *clone() const;
		void use (ICharacter& target);
};

#endif

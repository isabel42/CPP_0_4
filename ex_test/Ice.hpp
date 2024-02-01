/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:28:30 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 16:54:03 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
	private	: 
	
	public:
		Ice();
		~Ice();
		Ice & operator=(Ice const & src);
		Ice (Ice const &src);

		Ice *clone() const;
		// void use (ICharacter& target);
};

#endif

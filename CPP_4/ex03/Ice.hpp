/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/11 10:45:06 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <iomanip>
# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;

	public:
		Ice();
		Ice (Ice const &src);
		~Ice();
		Ice & operator=( Ice const & src);

		Ice* clone() const;
		void use(ICharacter& target);
	
};

# endif
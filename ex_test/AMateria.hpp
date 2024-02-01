/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:28:16 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/01 16:34:26 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP 

# include <iostream>
# include <iomanip>

class AMateria
{
	protected:
		std::string type;
		
	public:
		AMateria(std::string const & type);
		AMateria();
		virtual ~AMateria();
		AMateria & operator=(AMateria const & src);
		AMateria (AMateria const &src);

		std::string const & getType() const; //Returns the materia type
		
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
};

#endif
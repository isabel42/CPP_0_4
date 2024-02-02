/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 14:39:26 by itovar-n          #+#    #+#             */
/*   Updated: 2024/02/02 15:54:30 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAETRIASOURCE_HPP
# define MAETRIASOURCE_HPP

#include <iostream>
#include <iomanip>

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *stock[4];

	public:
		void		displayKnownRecipes(void);
		MateriaSource();
		~MateriaSource();
		MateriaSource  & operator=(MateriaSource const & src);
		MateriaSource(MateriaSource const &src);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);



		
};

#endif
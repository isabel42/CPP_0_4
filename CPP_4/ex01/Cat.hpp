/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 16:04:45 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <iomanip>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *cerveau;

	public:
		Cat();
		Cat (Cat const &src);
		~Cat();
		Cat & operator=( Cat const & src);
		virtual void makeSound() const;
		void compareTo(Cat const & other_cat) const;
		
	
};

# endif
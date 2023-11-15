/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/09 16:04:45 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <iomanip>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal (AAnimal const &src);
		virtual ~AAnimal();
		AAnimal & operator=( AAnimal const & src);
		virtual void makeSound() const = 0;
		std::string getType() const;
		
	
};

# endif
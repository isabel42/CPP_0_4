/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/06 17:35:08 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>

class Fixed
{
	private:
		int value; 
		static const int fract = 8;

	public:
		Fixed();
		~Fixed();
		Fixed (Fixed const &src);
		Fixed & operator=( Fixed const & src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
	
};

# endif
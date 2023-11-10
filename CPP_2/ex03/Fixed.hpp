/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:29 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/08 15:47:05 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
#include <cmath>

class Fixed
{
	private:
		int value; 
		static const int fract = 8;

	public:
		Fixed();
		~Fixed();
		Fixed (Fixed const &src);
		Fixed(int const value);
		Fixed(float const value);
		Fixed & operator=( Fixed const & src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
		bool operator>(Fixed const & cmp);
		bool operator<(Fixed const & cmp);
		bool operator>=(Fixed const & cmp);
		bool operator<=(Fixed const & cmp);
		bool operator==(Fixed const & cmp);
		bool operator!=(Fixed const & cmp);
		
		Fixed operator+(Fixed const & add);
		Fixed operator-(Fixed const & add);
		Fixed operator*(Fixed const & add);
		Fixed operator/(Fixed const & add);
		
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed & operator++(void);
		Fixed & operator--(void);

		static Fixed &min(Fixed &f, Fixed &s);
		static const Fixed &min(const Fixed &f, const Fixed &s);
		static Fixed &max(Fixed &f, Fixed &s);
		static const Fixed &max(const Fixed &f, const Fixed &s);
};

std::ostream & operator<<( std::ostream & o, Fixed const & src);

# endif
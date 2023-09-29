/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:59:14 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/29 16:42:40 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>


class Harl
{
	private:
		void debug ( void );
		void info ( void );
		void warning ( void );
		void error ( void );

	public:
		Harl();
		~Harl();
		void complain (std::string level );
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:03:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/06 15:38:34 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact ( void ) //(std::string fn, std::string l_n, std::string n_n, std::string p_n, std::string d_s)
{
	std::cout << "Hola" << std::endl;
	return ;
	// Contact.first_name = fn;
	// Contact.last_name = l_n;
	// Contact.nick_name = n_n;
	// Contact.phone_number = p_n;
	// Contact.darkest_sectret = d_s;
}

Contact::~Contact ( void ) //(std::string fn, std::string l_n, std::string n_n, std::string p_n, std::string d_s)
{
	std::cout << "Bye" << std::endl;
	return ;
}
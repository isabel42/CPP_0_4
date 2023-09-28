/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:38:51 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/28 16:34:11 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Phonebook_main.hpp"

class Contact
{
private:
	// Member attributes
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	// Prototype of the constructor
	Contact();
	
	// Alternative definition of the constructor:
	// Contact(std::string f, std::string l, std::string n, std::string ph, std::string d);

	// Prototype of the destructor
	~Contact();

	void ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d);

	// Const before ";" tells that in the function we will never modify the instance's attributes
	// (No assignation inside, like this.first_name = "John Doe")

	std::string	get_first_name() const;
	std::string	get_last_name() const;
	std::string	get_nickname() const;
	std::string	get_phone_number() const;
	std::string	get_darkest_secret() const;
	void		init();

	std::string _getInput(std::string str) const;
	std::string _printLen(std::string str) const;
    void    	display(int index) const;
};
#endif
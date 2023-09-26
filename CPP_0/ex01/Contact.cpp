/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:03:22 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/11 19:58:57 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_main.hpp"

// Contact::Contact(std::string f, std::string l, std::string n, std::string ph, std::string d)
// {
// 	this->_first_name = f;
// 	this->_last_name = l;
// 	this->_nickname = n;
// 	this->_phone_number = ph;
// 	this->_darkest_secret = d;

// }

// Contact::Contact(std::string f, std::string l, std::string n, std::string ph, std::string d)
Contact::Contact()
{

}

Contact::~Contact()
{

}

void Contact::ft_print(void) const
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}

void Contact::ft_set_values(std::string f, std::string l, std::string n, std::string ph, std::string d)
{
	_first_name = f;
	_last_name = l;
	_nickname = n;
	_phone_number = ph;
	_darkest_secret = d;
}

std::string	Contact::get_first_name() const
{
	return (_first_name);
}

std::string	Contact::get_last_name() const
{
	return (_last_name);
}

std::string	Contact::get_nickname() const
{
	return (_nickname);
}

std::string	Contact::get_phone_number() const
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret() const
{
	return (_darkest_secret);
}

std::string Contact::_getInput(std::string str) const 
{
    std::string input = "";
    while (42)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            break;
        else 
		{
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
	}
    return (input);
}

void	Contact::init()
{
	std::cin.ignore();
    this->_first_name = this->_getInput("Please enter contact's first name: ");
    this->_last_name = this->_getInput("Please enter contact's last name: ");
    this->_nickname = this->_getInput("Please enter contact's nickname: ");
    this->_phone_number = this->_getInput("Please enter contact's phone number: ");
    this->_darkest_secret = this->_getInput("Please enter contact's darkest secret: ");
    std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}


void    Contact::display(int index) const {
    if (this->_first_name.empty() || this->_last_name.empty() || this->_nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_first_name << std::endl;
    std::cout << "Last Name:\t" << this->_last_name << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone number:\t" << this->_phone_number << std::endl;
    std::cout << "Darkest secret:\t" << this->_darkest_secret << std::endl;
    std::cout << std::endl;
}

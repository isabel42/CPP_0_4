/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:28:06 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/11 20:03:42 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook_main.hpp"

// Constructor
PhoneBook::PhoneBook()
{

}

// Destructor
PhoneBook::~PhoneBook()
{
	
}

// Returns a copy of PhoneBook[i] (values modified inside won't modify the class)
Contact PhoneBook::get_contact(int i)
{
	return (Pb[i]);
}

std::string	PhoneBook::get_first_name(int i)
{
	return (Pb[i].get_first_name());
}

std::string	PhoneBook::get_last_name(int i)
{
	return (Pb[i].get_last_name());
}

std::string	PhoneBook::get_nickname(int i)
{
	return (Pb[i].get_nickname());
}

std::string	PhoneBook::get_phone_number(int i)
{
	return (Pb[i].get_phone_number());
}

std::string	PhoneBook::get_darkest_secret(int i)
{
	return (Pb[i].get_darkest_secret());
}

void	PhoneBook::create_new_contact(int i)
	
{
	this->Pb[i % 8].init();
}

void	PhoneBook::show_all()
{
	int i;
	Contact test;

	i = 0;
	std::cout << "|" << std::setw(10) << "Index" << std::flush;
    std::cout << "|" << std::setw(10) << "Frist Name" << std::flush;
	std::cout << "|" << std::setw(10) << "Last Name" << std::flush;
    std::cout << "|" << std::setw(10) << "Nickname" << std::flush;
    std::cout << "|" << std::endl;
	while (i < 8)
	{
		test = get_contact(i);
		if (test.get_first_name().empty() || test.get_last_name().empty() || test.get_nickname().empty())
        	break ;
    	std::cout << "|" << std::setw(10) << i + 1 << std::flush;
    	std::cout << "|" << std::setw(10) << test._printLen(test.get_first_name()) << std::flush;
		std::cout << "|" << std::setw(10) << test._printLen(test.get_last_name()) << std::flush;
    	std::cout << "|" << std::setw(10) << test._printLen(test.get_nickname()) << std::flush;
    	std::cout << "|" << std::endl;
		i++;
	}
}

void PhoneBook::show_one()
{
	int     input = -1;
    while (42)
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 1 && input <= 8))
            break; 
		else 
		{
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
	}
    this->Pb[input - 1].display(input);

}
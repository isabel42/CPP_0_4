/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:13 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/28 16:26:31 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_main.hpp"
#include <stack>
#include <limits>


int main()
{
	std::string	input = "";
	int			count;
	PhoneBook	pb;

	count = 0;
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
		{
			std::cout << input;
			pb.create_new_contact(count);
			count++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			pb.show_all();
			pb.show_one();
		}
		std::getline(std::cin, input);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:08:13 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/20 09:54:42 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook_main.hpp"
#include <stack>


int main()
{
	std::string	input;
	int			count;
	PhoneBook	pb;

	std::cin >> input;
	count = 0;
	while(input != "EXIT")
	{
		if (input == "ADD")
		{
			pb.create_new_contact(count);
			count++;
		}
		else if (input == "SEARCH")
		{
			pb.show_all();
			pb.show_one();
		}
		std::cin >> input;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:50:58 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/11 19:54:03 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Phonebook_main.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void 		create_new_contact(int i);
		Contact 	get_contact(int i);
		void		show_all();
		void		show_one();
		std::string	get_first_name(int i);
		std::string	get_last_name(int i);
		std::string	get_nickname(int i);
		std::string	get_phone_number(int i);
		std::string	get_darkest_secret(int i);

	private:
		Contact Pb[8];
};

#endif
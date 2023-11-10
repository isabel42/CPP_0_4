/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:27:38 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/10 19:01:17 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "Animal.hpp"

int main()
{
	int i;

	i = 0;
	const Animal* ani[10];
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	while (i < 10)
	{
		if (i % 2)
			ani[i] = new Dog();
		else
			ani[i] = new Cat();
		i++;
	}
	i = 0;
	while (i < 10)
	{
		delete ani[i];
		i++;
	}
	
	delete d;//should not create a leak
	delete c;
	
	//--- checking deepness of cp

	Dog chien;
	Cat chat;

	Dog & chien_ref = chien;
	Cat & chat_ref = chat;

	Dog chien_cp(chien_ref);
	Cat chat_cp(chat_ref);
	
	Dog & chien_cp_ref = chien_cp;
	Cat & chat_cp_ref = chat_cp;
	
	chien.compareTo(chien_cp_ref);
	chat.compareTo(chat_cp_ref);
	
	// system("leaks a.out");
	return(0);
}

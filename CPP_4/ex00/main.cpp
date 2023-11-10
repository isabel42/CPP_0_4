/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:27:38 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/10 10:22:22 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main ()
{
	std::cout << std::endl;
	
	const Animal *chat = new Cat();
	const Animal *chien = new Dog();
	const Animal *ani = new Animal();

	chat->makeSound();
	chien->makeSound();
	ani->makeSound();

	std::cout << std::endl;

	const WrongAnimal* i = new WrongCat();
	const WrongAnimal* meta = new WrongAnimal();
	std::cout << "WronCat type: " << i->getType() << "." << std::endl;
	i->makeSound(); 
	meta->makeSound();
	delete chat;
	delete chien;
	delete ani;
	delete i;
	delete meta;

}

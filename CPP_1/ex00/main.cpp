/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:56:50 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/02 16:10:10 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    std::string name;

    std::cout << "Creating zombie on the stack." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    std::cout << std::endl;
    Zombie zombi1(name);
    
    std::cout << "Creating zombie on the heap." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    Zombie *zombi2 = newZombie(name);
    zombi2->announce();
    delete zombi2;
    std::cout << std::endl;

    std::cout << "Calling randomChump()." << std::endl;
    randomChump("Randi");
    return 0;
}
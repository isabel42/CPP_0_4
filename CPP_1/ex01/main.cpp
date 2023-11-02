/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:56:50 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/02 14:37:01 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) 
{

    std::string name;
    int N;
    int i;
    Zombie *zombie_horde;

    std::cout << "Creating zombie horde." << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;
    std::cout << "Number of zombies: " << std::flush;
    std::cin >> N;
    std::cout << std::endl;
    zombie_horde = zombieHorde(N, name);
    i = 0;
    while (i < N)
    {
        zombie_horde[i].announce();
        i++;
    }
    delete [] zombie_horde;

}
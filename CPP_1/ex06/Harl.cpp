/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:02:31 by itovar-n          #+#    #+#             */
/*   Updated: 2023/11/02 16:07:31 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{

}

Harl::~Harl( void )
{

}

void Harl::debug (void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}

void Harl::info (void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

}
void Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}
void Harl::error (void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;

}

void Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string comm[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4)
	{
		if (!comm[i].compare(level))
		{
			switch (i)
			{
				case 0:
					std::cout << "[ " << comm[i] << " ]" << std::endl;
					(this->*f[i])();
					std::cout << std::endl;
					i++;
				case 1:
					std::cout << "[ " << comm[i] << " ]" << std::endl;
					(this->*f[i])();
					std::cout << std::endl;
					i++;
				case 2:
					std::cout << "[ " << comm[i] << " ]" << std::endl;
					(this->*f[i])();
					std::cout << std::endl;
					i++;
				case 3:
					std::cout << "[ " << comm[i] << " ]" << std::endl;
					(this->*f[i])();
					std::cout << std::endl;
					break;
					i++;
			}
		}
		else if (i == 3)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:02:31 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/29 17:05:18 by itovar-n         ###   ########.fr       */
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
	int write = 0;

	while (i < 4)
	{
		if (!comm[i].compare(level) || write > 0)
		{
			std::cout << "[ " << comm[i] << " ]" << std::endl;
			(this->*f[i])();
			std::cout << std::endl;
			write++;
		}
		i++;
	}
	if (write == 0)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

}
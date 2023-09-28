/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:27:56 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/28 15:02:35 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[i])
	{
		std::string s1 = (std::string)argv[i];
		j = 0;
		while (s1[j])
		{
			std::cout << (char)std::toupper(s1[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:29:23 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/29 16:37:00 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_replace(std::string *myText, std::string s1, std::string s2)
{
	std::size_t pos = (*myText).find(s1);

	while (pos != std::string::npos)
	{
		(*myText).erase(pos, s1.length());
		(*myText).insert(pos, s2);
		pos = (*myText).find(s1);
	}
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}
	std::string myText;
	std::string myOutName = (std::string) argv[1] + ".replace";
	std::ifstream MyReadFile(argv[1]);
	if (!MyReadFile.is_open())
	{
		std::cout << "File " << argv[1] << " does not exist." << std::endl;
		return (-1);
	}
	std::ofstream MyOutFile(myOutName);
	if (!MyOutFile.is_open())
	{
		std::cout << "File " << myOutName << "could not be created." << std::endl;
		return (-1);
	}
	while (std::getline (MyReadFile, myText, '\0')) 
	{
		ft_replace(&myText, argv[2], argv[3]);
		MyOutFile << myText;
	}
	MyReadFile.close();
	MyOutFile.close();

    return 0;
}
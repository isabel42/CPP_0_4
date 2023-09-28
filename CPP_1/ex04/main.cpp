/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itovar-n <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:29:23 by itovar-n          #+#    #+#             */
/*   Updated: 2023/09/28 17:03:55 by itovar-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (0);
	}


	// Create a text string, which is used to output the text file
	std::string myText;
	std::string myOutName = (std::string) argv[1] + ".replace";

	// Read from the text file
	std::ifstream MyReadFile(argv[1]);
	if (!MyReadFile.is_open())
	{
		std::cout << "File " << argv[1] << " does not exist." << std::endl;
		return (-1);
	}
	std::ofstream MyOutFile(myOutName);

	// Use a while loop together with the getline() function to read the file line by line
	while (getline (MyReadFile, myText)) 
	{
  		// Output the text from the file
		MyOutFile << myText;
	}

// Close the file
MyReadFile.close();
 
    return 0;
}
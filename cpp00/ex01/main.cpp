/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:35:20 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/10 22:19:25 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << "PHONEBOOK $ ";
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		std::cout << "PHONEBOOK $ ";
		std::getline(std::cin, input);
	}
	std::cout << "Adios!" << std::endl;
	return (0);
}

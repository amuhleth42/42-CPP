/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:15:29 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/11 18:20:19 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
	this->nb_added = 0;
	std::cout << "PhoneBook constuctor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destuctor called" << std::endl;
}

void	PhoneBook::add(void)
{
	this->tab[this->nb_added % 8].set_data();
	this->nb_added++;
}

void	PhoneBook::search(void)
{
	if (this->nb_added == 0)
		std::cout << "Please ADD a contact before searching." << std::endl;
	else
	{
		std::cout << "|     INDEX|FIRST_NAME| LAST_NAME|  NICKNAME|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		for (int i = 0 ; i < this->nb_added && i < 8 ; i++)
		{
			std::cout << "|         " << i << "|";
			this->tab[i].show_columns();
		}
		std::cout << "Please enter the index of a contact to display its data: ";
		std::string	input;
		std::getline(std::cin, input);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:15:29 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/10 21:45:30 by amuhleth         ###   ########.fr       */
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
	if (this->nb_added == 8)
		std::cout << "Bro faut encore gerer ca" << std::endl;
	else
	{
		this->tab[this->nb_added].set_data();
		this->nb_added++;
	}
}

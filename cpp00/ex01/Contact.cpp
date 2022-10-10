/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:22:59 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/10 22:12:58 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
}

void	Contact::set_data(void)
{
	std::cout << "Please enter your First Name" << std::endl;
	std::getline(std::cin, this->first_name);
	std::cout << "Please enter your Last Name" << std::endl;
	std::getline(std::cin, this->last_name);
	std::cout << "Please enter your Nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Please enter your Phone Number" << std::endl;
	std::getline(std::cin, this->phone_number);
	std::cout << "Please enter your Darkest Secret" << std::endl;
	std::getline(std::cin, this->darkest_secret);
}

void	Contact::show_columns(void)
{
	if (this->first_name.size() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->first_name;

	std::cout << "|";
	if (this->last_name.size() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->last_name;

	std::cout << "|";
	if (this->nickname.size() > 10)
		std::cout << this->nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->nickname;
	std::cout << "|" << std::endl;
}

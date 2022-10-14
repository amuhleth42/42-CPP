/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:22:59 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/14 13:12:30 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	//std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Contact destructor called" << std::endl;
}

void	Contact::set_data(void)
{
	std::cout << "Please enter your First Name" << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << "Please enter your Last Name" << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << "Please enter your Nickname" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Please enter your Phone Number" << std::endl;
	std::getline(std::cin, this->_phone_number);
	std::cout << "Please enter your Darkest Secret" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
}

void	Contact::show_columns(void)
{
	if (this->_first_name.size() > 10)
		std::cout << this->_first_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_first_name;

	std::cout << "|";
	if (this->_last_name.size() > 10)
		std::cout << this->_last_name.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_last_name;

	std::cout << "|";
	if (this->_nickname.size() > 10)
		std::cout << this->_nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_nickname;
	std::cout << "|" << std::endl;
}

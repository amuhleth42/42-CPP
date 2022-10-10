/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:22:59 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/10 21:37:01 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

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
	std::cout << "Please enter your Darkest Secret" << std::endl;
	std::getline(std::cin, this->darkest_secret);
}

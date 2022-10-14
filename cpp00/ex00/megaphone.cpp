/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:01:17 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/14 13:04:05 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			std::string str(argv[i]);
			for (size_t j = 0 ; j < str.size() ; j++)
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:25:40 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 17:07:05 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool	handle_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./sed_c_nul <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::ifstream	in(argv[1]);
	if (!in.is_open())
	{
		std::cout << argv[1] << ": Cannot open this file." << std::endl;
		return (1);
	}
	in.close();
	return (0);
}

int	main(int argc, char **argv)
{
	if (handle_args(argc, argv))
		return (0);

	std::string		input;
	std::string		outfile = (std::string)argv[1] + ".replace";
	std::ifstream	in(argv[1]);
	std::ofstream	out(outfile);

	while (std::getline(in, input))
		std::cout << input << std::endl;

	in.close();
	out.close();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:39:17 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 13:29:12 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	void	announce( void );
	Zombie( std::string name );
	~Zombie( void );

private:

	std::string	_name;


};

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:39:17 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 13:52:49 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {

public:

	void	announce( void ) const;
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
	void	set_name( std::string name );

private:

	std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif

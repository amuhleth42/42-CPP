/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:07:44 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:41:05 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {

public :

	Weapon( void );
	Weapon( std::string type );
	~Weapon( void );
	std::string&	getType( void );
	void	setType( std::string type );


private :

	std::string _type;

};

#endif

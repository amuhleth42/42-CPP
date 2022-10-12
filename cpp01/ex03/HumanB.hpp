/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:26:33 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:53:39 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {

public:

	HumanB( void );
	HumanB( std::string name );
	~HumanB( void );
	void	setName( std::string name );
	void	setWeapon( Weapon &weapon );
	void	attack( void ) const;

private:

	std::string	_name;
	Weapon*		_weapon;
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:16:21 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/12 14:45:24 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:

	HumanA( Weapon &weapon );
	HumanA( std::string name, Weapon &weapon );
	~HumanA( void );
	void	setName( std::string name );
	void	attack( void ) const;

private:

	std::string	_name;
	Weapon&		_weapon;
};
#endif

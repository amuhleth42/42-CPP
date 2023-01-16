/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:12:51 by amuhleth          #+#    #+#             */
/*   Updated: 2022/11/02 17:22:10 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP

# include <string>
# include <iostream>

class	ClapTrap {

public:

	//ClapTrap(void);
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap &src);
	~ClapTrap(void);

	std::string	getName(void) const;
	int			getHp(void) const;
	int			getEp(void) const;
	int			getAttackDamage(void) const;

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap	&operator=(ClapTrap const & rhs);

private:

	std::string	_name;
	int			_hp;
	int			_ep;
	int			_attackDamage;

};



#endif

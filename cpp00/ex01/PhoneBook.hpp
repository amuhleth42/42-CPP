/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhleth <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:29:47 by amuhleth          #+#    #+#             */
/*   Updated: 2022/10/10 21:40:32 by amuhleth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:

	Contact	tab[8];
	int	nb_added;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
};

#endif

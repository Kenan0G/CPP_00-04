/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:57:23 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 14:15:59 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
#include <iomanip>
#include <iostream>
#include <locale>

// ma classe Contact
class Contact
{
	public:			// les fonctions qui sont en public, je peux les utiliser dnas le main

	Contact();			// le constructeur
	~Contact();			// le destructeur

	void	display_contact();
	void	display_contact_2(std::string inf, int j);
	int		display_informations();
	void	set_phone_number();
	void	set_first_name();
	void	set_last_name();
	void	set_nickname();
	void	set_secret();

	private:		// ce sont les variables qui sont utilisables que dans ma classe contact
	
	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_secret;
};


// prototypes fonctions classiques

void	afficher_menu(void);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:11:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 13:54:02 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::search()
{
	m_contact->display_contact();
	chose_contact();
}

void	Phonebook::chose_contact()
{
	int			check(1);
	std::string input("");

	while (check)
	{	
		std::cout << "Veuillez choisir entre un contact entre 1 et 8" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (!input.compare("1"))
			check = m_contact[0].display_informations();
		else if (!input.compare("2"))
			check = m_contact[1].display_informations();
		else if (!input.compare("3"))
			check = m_contact[2].display_informations();
		else if (!input.compare("4"))
			check = m_contact[3].display_informations();
		else if (!input.compare("5"))
			check = m_contact[4].display_informations();
		else if (!input.compare("6"))
			check = m_contact[5].display_informations();
		else if (!input.compare("7"))
			check = m_contact[6].display_informations();
		else if (!input.compare("8"))
			check = m_contact[7].display_informations();
		else
			std::cout << "Erreur ! ";
	}
}

void	Phonebook::remplir_contact(int index)
{
	m_contact[index].set_first_name();
	m_contact[index].set_last_name();
	m_contact[index].set_nickname();
	m_contact[index].set_phone_number();
	m_contact[index].set_secret();
}

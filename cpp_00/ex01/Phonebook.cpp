/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:11:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/15 18:22:27 by kgezgin          ###   ########.fr       */
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

void	Phonebook::afficher_contact() const
{
	std::cout << "1. ";
	m_contact[0].display_contact();
	std::cout << std::endl;
	std::cout << "2. ";
	m_contact[1].display_contact();
	std::cout << std::endl;
	std::cout << "3. ";
	m_contact[2].display_contact();
	std::cout << std::endl;
	std::cout << "4. ";
	m_contact[3].display_contact();
	std::cout << std::endl;
	std::cout << "5. ";
	m_contact[4].display_contact();
	std::cout << std::endl;
	std::cout << "6. ";
	m_contact[5].display_contact();
	std::cout << std::endl;
	std::cout << "7. ";
	m_contact[6].display_contact();
	std::cout << std::endl;
	std::cout << "8. ";
	m_contact[7].display_contact();
	std::cout << std::endl;
}

void	Phonebook::remplir_contact(int index)
{
	m_contact[index].set_first_name();
	m_contact[index].set_last_name();
	m_contact[index].set_nickname();
	m_contact[index].set_phone_number();
	m_contact[index].set_secret();
	this->afficher_contact();
}

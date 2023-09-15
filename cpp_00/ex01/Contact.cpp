/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:57:15 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/15 18:34:37 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""),
	m_nickname(""), m_phone_number(""), m_secret("")
{
}

Contact::~Contact()
{
}

void	Contact::display_contact() const
{
	std::string test;
	int			i(0);

	if (m_first_name.length() <= 10)
	{
		std::cout << m_first_name;
		i = m_first_name.length();
		while (i < 10)
			std::cout << " ";
	}
	else
	{
		while (i < 10)
			std::cout << m_first_name[i];
	}
	std::cout << "|"

	// adapter cette fonction pour au'elle fontionne pour tout les attributs

		
	// std:/:cout << "first name = " << m_first_name << std::endl
	//  << /"last_name = " << m_last_name << std::endl
	//  << /"nickname = " << m_nickname << std::endl
	//  << /"phone_number = " << m_phone_number << std::endl
	//  << /"secret = " << m_secret << std::endl;
}

void	Contact::set_first_name()
{
	std::string	input;

	std::cout << "Quel est le prenom du contact ?" << std::endl;
	std::getline(std::cin, input);
	this->m_first_name = input;
}

void	Contact::set_last_name()
{
	std::string	input;

	std::cout << "Quel est le nom du contact ?" << std::endl;
	std::getline(std::cin, input);
	this->m_last_name = input;
}

void	Contact::set_nickname()
{
	std::string	input;

	std::cout << "Quel est le surnom du contact ?" << std::endl;
	std::getline(std::cin, input);
	this->m_nickname = input;
}

void	Contact::set_phone_number()
{
	std::string	input;

	std::cout << "Quel est le numero de telephone du contact ?" << std::endl;
	std::getline(std::cin, input);
	this->m_phone_number = input;
}

void	Contact::set_secret()
{
	std::string	input;

	std::cout << "Quel est le secret du contact ?" << std::endl;
	std::getline(std::cin, input);
	this->m_secret = input;
}
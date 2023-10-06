/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:57:15 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/06 12:06:42 by kgezgin          ###   ########.fr       */
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

void	Contact::set_first_name()
{
	std::string	input;

	while(input.empty())
	{
		std::cout << "Quel est le prenom du contact ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	this->m_first_name = input;
}

void	Contact::set_last_name()
{
	std::string	input;

	while(input.empty())
	{
		std::cout << "Quel est le nom du contact ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	this->m_last_name = input;
}

void	Contact::set_nickname()
{
	std::string	input;

	while(input.empty())
	{
		std::cout << "Quel est le surnom du contact ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	this->m_nickname = input;
}

void	Contact::set_phone_number()
{
	std::string	input;

	while(input.empty())
	{
		std::cout << "Quel est le numero de telephone du contact ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	this->m_phone_number = input;
}

void	Contact::set_secret()
{
	std::string	input;

	while(input.empty())
	{
		std::cout << "Quel est le secret du contact ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	this->m_secret = input;
}

void	Contact::display_contact()
{
	int	i(0);

	std::cout << "_____________ PHONEBOOK ______________" << std::endl;
	std::cout << "INDEX|FIRST_NAME|LAST_NAME | NICKNAME |" << std::endl;
	std::cout << "_____|__________|__________|__________|" << std::endl;
	while (i < 8)
	{
		std::cout << std::right << std::setw(4) << i + 1 << ".|";
		display_contact_2(this[i].m_first_name, 0);
		display_contact_2(this[i].m_last_name, 0);
		display_contact_2(this[i].m_nickname, 0);
		std::cout << std::endl; 
		i++;
	}
}

void	Contact::display_contact_2(std::string info, int j)
{

	if (info.length() > 10)
		std::cout << std::right << std::setw(8) << info.substr(0, 9) << ".";
	else
		std::cout << std::right << std::setw(10) << info.substr(0, 10);
	if (j == 0)
		std::cout << "|";
}

int		Contact::display_informations()
{
	std::cout << "--- First_name ---" << std::endl << this->m_first_name << std::endl;
	std::cout << "--- Last_name ---" << std::endl << this->m_last_name << std::endl;
	std::cout << "--- Nickname ---" << std::endl << this->m_nickname << std::endl;
	std::cout << "--- Phone_number ---" << std::endl << this->m_phone_number << std::endl;
	std::cout << "--- Secret ---" << std::endl << this->m_secret << std::endl;
	return (0);
}

// void	Contact::display_contact_2(std::string info, int j) const
// {
// 	std::string test;
// 	int			i(0);

// 	if (info.length() <= 10)
// 	{
// 		while (info[i])
// 		{
// 			if (info[i] == '\t')
// 				std::cout << " ";
// 			else	
// 				std::cout << info[i];
// 			i++;
// 		}
// 		// i = info.length();
// 		while (i < 10)
// 		{
// 			std::cout << " ";
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (i < 9)
// 		{
// 			if (info[i] == '\t')
// 				std::cout << " ";
// 			else	
// 				std::cout << info[i];
// 			i++;
// 		}
// 		std::cout << ".";
// 	}
// 	if (j == 0)
// 		std::cout << "|";
// }

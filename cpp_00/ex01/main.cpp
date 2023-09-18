/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:40:36 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 13:40:13 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string.h>

int	main()
{
	Phonebook		phonebook_1;
	std::string		input("");
	int				i(0);

	afficher_menu();
	while (input.compare("EXIT"))
	{
		std::cout << "Que voulez vous faire ?" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		            exit(0);
		if (!input.compare("ADD"))
		{
			if (i == 8)
				i = 0;
			phonebook_1.remplir_contact(i);
			i++;
		}
		else if (!input.compare("SEARCH"))
			phonebook_1.search();
	}
	return (0);	
}

void	afficher_menu(void)
{
	std::cout << "________________ PHONEBOOK _________________" << std::endl;
	std::cout << "ADD 	: pour ajouter un contact" << std::endl;
	std::cout << "SEARCH 	: pour chercher un contact" << std::endl;
	std::cout << "EXIT 	: pour quitter" << std::endl << std::endl;
	
}

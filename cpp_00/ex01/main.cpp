/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:40:36 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/15 18:25:02 by kgezgin          ###   ########.fr       */
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
		if (!input.compare("ADD"))
		{
			if (i == 8)
				i = 0;
			phonebook_1.remplir_contact(i);
			i++;
		}
		else if (!input.compare("SEARCH"))
	}
	std::cout << "sorti de boucle" << std::endl;

	return (0);	
}

void	afficher_menu(void)
{
	std::cout << "-------- PHONEBOOK --------" << std::endl << std::endl;
	std::cout << "ADD 	: to add  an contact" << std::endl;
	std::cout << "SEARCH 	: to search a contact" << std::endl;
	std::cout << "EXIT 	: to exit" << std::endl;
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:18:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 10:39:48 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		string("HI THIS  IS BRAIN");
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "adresse string    = " << &string << std::endl;
	std::cout << "adresse stringPTR = " << stringPTR << std::endl;
	std::cout << "adresse stringREF = " << &stringREF << std::endl << std::endl;
	
	std::cout << "---------------------------------" << std::endl << std::endl;
	
	std::cout << "valeure string    		= " << string << std::endl;
	std::cout << "valeure pointee par stringPTR	= " << *stringPTR << std::endl;
	std::cout << "valeure pointee par stringREF	= " << stringREF << std::endl << std::endl;

	return (0);
}
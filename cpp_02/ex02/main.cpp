/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:40:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/13 12:26:42 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include "fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << "operateurs incrementation" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	// ici avec la pre incrementation, on renvoie la valeure incrementee directement
	// c'est pour ca qu'on passe de 0 a 0.0039....
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	// ici la valeure est modifiee mais la post incremenatation renvoie la valeure avant modifiction
	// c'est pour ca que ca affiche la valeure avant modif et on voit la modif dans le prochain cout 
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << "\nmax min" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	Fixed d(5.05f);
	Fixed e(2.5f);
	Fixed f;
	std::cout << "\noperateurs arithmetiques" << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;

	f = d + e;
	std::cout << "f = d + e: " << f << std::endl;

	f = d - e;
	std::cout << "f = d - e: " << f << std::endl;

	f = d * e;
	std::cout << "f = d * e: " << f << std::endl;

	f = d / e;
	std::cout << "f = d / e: " << f << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	
	Fixed g(5.05f);
	Fixed h(5.05f);
	Fixed i(2);
	std::cout << "\noperateurs de comparaisons" << std::endl;
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << "i: " << i << std::endl;

	if (g > i)
		std::cout << "g is superior than i" << std::endl;
	if (i < g)
		std::cout << "i is inferior than g" << std::endl;
	if (g >= h)
		std::cout << "g is superior or equal to h" << std::endl;
	if (i <= g)
		std::cout << "i is inferior or equal to g" << std::endl;
	if (g == h)
		std::cout << "g is equal to h" << std::endl;
	if (g != i)
		std::cout << "g is not equal to i" << std::endl;
		
	return 0;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat(); // Utilisez la fonction toFloat pour convertir en virgule flottante et l'insérer dans le flux
	return os;			   // Retourne le flux de sortie
}


// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
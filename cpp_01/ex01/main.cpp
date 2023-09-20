/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:06:48 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 10:09:52 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie("christiano");
    zombie.announce();
    zombie.randomChump("ronaldo");

	int		i(0);
	Zombie	*horde;
	horde = zombie.zombieHorde(10, "zomblar");
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
    return (0);
}

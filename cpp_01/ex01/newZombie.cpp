/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:22:05 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 17:26:18 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::NewZombie(std::string name)
{
	return (new Zombie(name));
}

Zombie* 		Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i(0);

	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}
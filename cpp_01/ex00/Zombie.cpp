/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:21:52 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/06 15:23:07 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl; 
}
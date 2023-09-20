/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:55:02 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 14:55:00 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) : name(new_name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (!this->weapon)
	{
		std::cout << "no weapon set" << std::endl;
	}
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:43:57 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 14:41:18 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon) : name(new_name), weapon(new_weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

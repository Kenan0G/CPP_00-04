/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:33:17 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 12:11:01 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include"Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string weapon_type) : type(weapon_type)
{
}

Weapon::~Weapon()
{
}

const std::string	Weapon::getType()
{
	std::string &typeREF = this->type;

	return (typeREF);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

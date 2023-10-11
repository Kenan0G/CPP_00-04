/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:20:58 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 18:59:17 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string newname) : ClapTrap(newname)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->attackPoints = other.attackPoints;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
		std::cout << "no energy left for " << name << "ScavTrap" << std::endl;
	else if (hitPoints == 0)
		std::cout << "no hitpoints left for " << name << "ScavTrap" << std::endl;
	else
	{
		this->energyPoints--;
		std::cout << name << " ScavTrap attacks " << target << " causing " << attackPoints << " points of damages " << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is on Gate keeper mode !" << std::endl;
}

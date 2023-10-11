/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:02:20 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 19:11:51 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newname) : ClapTrap(newname)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
		std::cout << "no energy left for " << name << "FragTrap" << std::endl;
	else if (hitPoints == 0)
		std::cout << "no hitpoints left for " << name << "FragTrap" << std::endl;
	else
	{
		this->energyPoints--;
		std::cout << name << " FragTrap attacks " << target << " causing " << attackPoints << " points of damages " << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " ask a high five!" << std::endl;
}
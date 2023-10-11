/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:46:07 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 18:56:40 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->attackPoints = 0;
	this->hitPoints = 10;
	this->energyPoints = 10;
}

ClapTrap::ClapTrap(std::string newname) : name(newname)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->attackPoints = 0;
	this->hitPoints = 10;
	this->energyPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap "<< name << " Destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
	return name;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return energyPoints; 
}

unsigned int ClapTrap::getHitPoints() const
{
	return hitPoints; 
}

unsigned int ClapTrap::getAttackDamage() const
{
	return attackPoints; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		hitPoints = hitPoints + amount;
		energyPoints -= 1;
		std::cout << name << " heals " << amount << " amount of hitpoints" << std::endl;
		// std::cout << "Actual Hitpoints of " << name << " = " << hitPoints << std::endl;
	}
	else
	{
		if (hitPoints <= 0)
			std::cout << "no hitpoints left for " << name << std::endl;
		else if (energyPoints <= 0)
			std::cout << "no energy left for " << name << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		hitPoints = hitPoints - amount;
		std::cout << name << " took " << amount << " amount of damages !" << std::endl;
		// std::cout << "Actual Hitpoints of " << name << " = " << hitPoints << std::endl;
	}
	if (hitPoints <= 0)
		std::cout << "no hitpoints left for " << name << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (energyPoints == 0)
		std::cout << "no energy left for " << name << std::endl;
	else if (hitPoints == 0)
		std::cout << "no hitpoints left for " << name << std::endl;
	else
	{
		this->energyPoints--;
		std::cout << name << " attacks " << target << " causing " << attackPoints << " points of damages " << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:54:48 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/09 16:30:25 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath>

const int Fixed::fractionalBit = 8;

// constructeur par default
Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructeur par copie
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

// constructeur avec int
Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	value = nb << fractionalBit;
}

// constructeur avec int
Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	value = static_cast<int>(roundf(nb * (1 << fractionalBit))); // Calcul du nombre entier à partir du flottant
}

// destructeur
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// surcharge de l'operation d'affectation
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->value) / (1 << Fixed::fractionalBit));
	// 1 Je convertie la valeur en float exp : 256 devient 256.0
	// 2 Je calcule la base de conversion donc 2p8 256
}

int Fixed::toInt() const
{
	return this->value >> fractionalBit; //  je delete la partie fractionnaire
}
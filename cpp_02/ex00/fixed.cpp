/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:40:20 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/09 16:00:08 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

// constructeur par default
Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructeur de copie
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:54:48 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/10 15:25:44 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"
#include <cmath>

const int Fixed::fractionalBit = 8;

// forme canonique : constructeur par default, constructeur par copie, surcharge operateur =, destructeur
Fixed::Fixed() : value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}



// constructeurs avec int ou float
Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	value = nb << fractionalBit;
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	value = static_cast<int>(roundf(nb * (1 << fractionalBit))); // Calcul du nombre entier à partir du flottant
}



// get and set
int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}



// conversions to float et to int
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



// operateurs de comparaisons
bool	Fixed::operator<(const Fixed &other) const
{
	return (this->value < other.value);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->value > other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{	
	return (this->value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{	
	return (this->value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->value != other.value);
}



// operateurs arithmetiques
Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed res;

	res.value = this->value + other.value;
	return (res);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed res;

	res.value = this->value - other.value;
	return (res);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed res;

	res.value = (this->toFloat() * other.toFloat() * (1 << Fixed::fractionalBit));
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	Fixed res;

	res.value = (this->toFloat() / other.toFloat() * (1 << Fixed::fractionalBit));
	return (res);
}



// operateurs d'incrementations
// pre-incrementation
Fixed	&Fixed::operator++(void)
{
	++this->value;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--this->value;
	return (*this);
}

// post-incrementation
Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	++(this->value);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	--(this->value);
	return (temp);
}



// fonctions min, max
// const
Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

// non-const
Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

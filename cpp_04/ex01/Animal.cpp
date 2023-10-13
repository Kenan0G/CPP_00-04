/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:58:49 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/13 14:46:54 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

Animal::Animal() : type("(animal)")
{
	std::cout << "Animal Default constructor called on " << type << std::endl;
}

Animal::Animal(std::string p_type) : type(p_type)
{
	std::cout << "Animal Default constructor called on " << type << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy constructor called on " << type << std::endl;
	if (this != &other)
		*this = other;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called on " << type << std::endl;
}

void	Animal::setType(std::string	p_type)
{
	type = p_type;
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "makeSound from Animal class is called" << std::endl;
}

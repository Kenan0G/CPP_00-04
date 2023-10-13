/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:26:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/13 15:26:28 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("(Wronganimal)")
{
	std::cout << "WrongAnimal Default constructor called on " << type << std::endl;
}

WrongAnimal::WrongAnimal(std::string p_type) : type(p_type)
{
	std::cout << "WrongAnimal Default constructor called on " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy constructor called on " << type << std::endl;
	if (this != &other)
		*this = other;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called on " << type << std::endl;
}

void	WrongAnimal::setType(std::string	p_type)
{
	type = p_type;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "makeSound from WrongAnimal class is called" << std::endl;
}

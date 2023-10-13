/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:23:22 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/13 17:00:10 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called on " << type << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}

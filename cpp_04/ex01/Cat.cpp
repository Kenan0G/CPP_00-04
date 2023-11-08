/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:09:08 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 10:24:45 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.hpp"
#include "includes/Brain.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		type = other.type;
		brain = new Brain((*other.brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Is Destroyed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

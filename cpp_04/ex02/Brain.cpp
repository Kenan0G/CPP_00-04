/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:14:51 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 10:28:46 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.hpp"

Brain::Brain()
{
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Some ideas";
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::~Brain()
{
	delete [] ideas;
	std::cout << "Brain Is Destroyed" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

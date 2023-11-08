/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:41:39 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 10:33:29 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"


int main()
{
	Animal	*animals[10];
	
	for (int i = 0; i < 10; i++)
	{
		if( i < 5)
		{
			animals[i] = new Cat();
		}
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return 0;
}

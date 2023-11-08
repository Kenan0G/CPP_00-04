/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:41:39 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 10:38:43 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
	
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	delete i;
// 	delete j;
// 	delete meta;
// 	return 0;
// }

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

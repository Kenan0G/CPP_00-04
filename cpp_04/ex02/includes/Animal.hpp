/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:42:48 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/13 17:28:17 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		virtual			~Animal();
		Animal			&operator=(const Animal &other);
		std::string		getType(void) const;
		void			setType(std::string type);
		virtual	void	makeSound(void) const = 0;

	protected:
		std::string		type;
};


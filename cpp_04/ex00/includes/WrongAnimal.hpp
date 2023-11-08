/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:26:58 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 09:11:25 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();
		WrongAnimal			&operator=(const WrongAnimal &other);
		std::string		getType(void) const;
		void			setType(std::string type);
		void			makeSound(void) const;

	protected:
		std::string		type;
};


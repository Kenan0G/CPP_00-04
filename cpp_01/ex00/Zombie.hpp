/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:23:32 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/06 17:01:56 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
#include <iostream>

class	Zombie
{
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce();
	
	private :
		std::string		name;
};

void	randomChump(std::string name);
Zombie	*NewZombie(std::string name);


#endif

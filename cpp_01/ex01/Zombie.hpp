/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:23:32 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 17:20:24 by kgezgin          ###   ########.fr       */
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

	Zombie			*NewZombie(std::string name);
	Zombie			*zombieHorde(int N, std::string name);
	void			randomChump(std::string name);
	void			set_name(std::string name);
	void			announce();
	
	private :	
	
	std::string		name;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:23:32 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 15:56:18 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
#include <iostream>

class	Zombie
{
	public :
	Zombie(std::string name);
	~Zombie();
	void			announce();
	Zombie	*NewZombie(std::string name);
	void	randomChump(std::string name);
	private :	
	
	std::string		name;
};

#endif
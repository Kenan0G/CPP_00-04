/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:30:16 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 18:52:11 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		std::string		getName() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getHitPoints() const;
		unsigned int	getAttackDamage() const;

		ClapTrap		&operator=(const ClapTrap &other);
		void 			attack(const std::string &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);

	protected:
		std::string		name;
		int				hitPoints;
		int				energyPoints;
		int				attackPoints;
};



#endif
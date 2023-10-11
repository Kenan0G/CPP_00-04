/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:26:08 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 18:54:28 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main()
{
	ScavTrap david("David");
	ClapTrap goliath("Goliath");
	
	std::cout << "Name: " << david.getName() << std::endl;
	std::cout << "Hit points: " << david.getHitPoints() << std::endl;
	std::cout << "Energy points: " << david.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << david.getAttackDamage() << std::endl;
	david.attack("Goliath");
	goliath.takeDamage(david.getAttackDamage());
	std::cout << "Hit points: " << goliath.getHitPoints() << std::endl;
	david.guardGate();
	goliath.beRepaired(20);
	std::cout << "Name: " << goliath.getName() << std::endl;
	std::cout << "Hit points: " << goliath.getHitPoints() << std::endl;
	std::cout << "Energy points: " << goliath.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << goliath.getAttackDamage() << std::endl;

	return 0;
}
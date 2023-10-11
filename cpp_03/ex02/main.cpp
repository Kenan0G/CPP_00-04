/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:26:08 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 19:16:33 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main()
{
	ScavTrap david("David");
	FragTrap goliath("Goliath");
	FragTrap lol(goliath);

	std::cout << "Name: " << lol.getName() << std::endl;
	std::cout << "Hit points: " << lol.getHitPoints() << std::endl;
	std::cout << "Energy points: " << lol.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << lol.getAttackDamage() << std::endl;
	david.attack("Goliath");
	goliath.attack("David");
	goliath.highFivesGuys();

	std::cout << "Name: " << goliath.getName() << std::endl;
	std::cout << "Hit points: " << goliath.getHitPoints() << std::endl;
	std::cout << "Energy points: " << goliath.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << goliath.getAttackDamage() << std::endl;
	return 0;
}

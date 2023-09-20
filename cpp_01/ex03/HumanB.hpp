/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:54:39 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 14:43:55 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include<iostream>
# include<string>
# include"Weapon.hpp"

class HumanB
{
private:
	std::string		name;
	Weapon			*weapon;
public:
	HumanB(std::string new_name);
	~HumanB();
	void	setWeapon(Weapon &weapon);
	void	attack();
};

#endif
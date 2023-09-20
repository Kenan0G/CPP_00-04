/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:44:09 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 14:41:13 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include<iostream>
# include<string>
# include"Weapon.hpp"

class HumanA
{
private:
	std::string		name;
	Weapon			&weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:33:20 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 12:38:24 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include<iostream>
# include<string>

class Weapon
{
private:
	std::string			type;
public:
	Weapon(std::string weapon_type);
	Weapon();
	~Weapon();
	const std::string	getType();
	void				setType(std::string new_type);
};

#endif
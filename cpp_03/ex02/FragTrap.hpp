/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:02:34 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 19:08:43 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);	
		FragTrap(const FragTrap &other);
		~FragTrap();
		FragTrap		&operator=(const FragTrap &other);
		void 			attack(const std::string &target);
		void 			guardGate();
		void			highFivesGuys(void);
};

#endif
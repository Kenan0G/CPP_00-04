/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:49:00 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/03 12:20:46 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
// #include<iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

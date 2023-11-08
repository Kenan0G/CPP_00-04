/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:15:12 by kgezgin           #+#    #+#             */
/*   Updated: 2023/11/08 10:29:36 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<string>
#include<iostream>

class	Brain
{
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain			&operator=(const Brain &other);

	private:
		std::string		*ideas;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:40:32 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/18 12:35:33 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <locale>
#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	public :
	
	Phonebook();
	~Phonebook();
	void	remplir_contact(int index);
	void	search();
	void	chose_contact();
	
	private :
	
	Contact	m_contact[8];
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:40:17 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/09 16:30:01 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					value;
		const static int	fractionalBit;

	public:
	
		Fixed();									// constructeur par default
		Fixed(const Fixed &other);					// constructeur de copie
		~Fixed();									// destructeur
		Fixed	&operator=(const Fixed &other);		// surcharge de l'operation d'affectation
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
};

#endif
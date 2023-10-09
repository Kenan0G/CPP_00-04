/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:55:07 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/09 16:23:02 by kgezgin          ###   ########.fr       */
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
		Fixed(const int nb);						// constructeur int
		Fixed(const float nb);						// constructeur float
		~Fixed();									// destructeur
	
		Fixed	&operator=(const Fixed &other);		// surcharge de l'operation d'affectation	
		float	toFloat(void) const;
		int		toInt() const;

		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:55:07 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/09 17:24:53 by kgezgin          ###   ########.fr       */
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
	
		// forme cannonique
		Fixed();
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);
		~Fixed();

		// constructeurs avec int ou float
		Fixed(const int nb);					
		Fixed(const float nb);

		// get and set
		int		getRawBits(void) const;
		void 	setRawBits(int const raw);
		
		// conversions to float et to int
		float	toFloat(void) const;
		int		toInt() const;
		
		// operateurs de comparaison
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;

		// operateurs arithmeiques
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator/(const Fixed &other);

		// operateurs d'incrementation
		Fixed	&operator++(void);	// pre incrementation
		Fixed	&operator--(void);	// pre incrementation
		Fixed	operator++(int);	// post incrementation
		Fixed	operator--(int);	// post incrementation

		// fonctions min, max
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
};


// ------------------------------prototypes ------------------------------------

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif

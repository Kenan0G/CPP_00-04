/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:11:36 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/15 15:12:12 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << static_cast<char>(std::toupper(av[i][j]));
		}
	}
	std::cout << std::endl;
    return (0);
}

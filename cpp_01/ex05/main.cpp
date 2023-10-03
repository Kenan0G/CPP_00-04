/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:17:10 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/03 12:47:35 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>
# include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("info");
 	harl.complain("warning");
	harl.complain("error");
}
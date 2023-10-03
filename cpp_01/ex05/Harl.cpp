/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:48:51 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/03 12:50:11 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	void (Harl::*func[4])() = {&Harl::debug,
								&Harl::info,
								&Harl::warning,
								&Harl::error};
	std::string	word[4] = {"debug", "info", "warning", "error"};
	int	i(0);

	while (i < 4)
	{
		if (level.compare(word[i]) == 0)
		{	
			(this->*(func[i]))();
			break;
		}
		i++;
	}
}


void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
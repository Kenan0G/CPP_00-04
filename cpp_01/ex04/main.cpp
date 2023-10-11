/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:17:10 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/11 11:14:33 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>

void	sed(std::string in, std::string s1, std::string s2)
{
	std::string	line;
	std::ifstream infile(in.c_str(), std::ios_base::in);
	if (!infile.is_open())
	{
		std::cerr << "Error while opening infile" << std::endl;
		return ;
	}
	std::ofstream outfile((in + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error while opening outfile" << std::endl;
		return ;
	}
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		std::string newLine;

		while (pos < line.length())
		{
			size_t nextPos = line.find(s1, pos);

			if (nextPos != std::string::npos)
			{
				newLine += line.substr(pos, nextPos - pos);
				newLine += s2;
				pos = nextPos + s1.length();
			}
			else
			{
				newLine += line.substr(pos);
				break; 
			}
		}
		outfile << newLine << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	infile(av[1]);
		std::string	s1(av[2]);
		std::string	s2(av[3]);
		if (s1.empty()) // || s2.empty())
		{
			std::cout << "error, string NULL" << std::endl;
			return 1;
		}
		else if (!av[1] || !*av[1])
		{
			std::cout << "error, need infile" << std::endl;
			return 1;
		}
		sed(infile, s1, s2);
	}
	else
		std::cout<< "le nombre d'arguments n'est pas bon";
	return (0);
}

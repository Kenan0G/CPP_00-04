/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:17:10 by kgezgin           #+#    #+#             */
/*   Updated: 2023/10/06 15:12:11 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <fstream>
# include <iostream>

void	sed(std::string in, std::string s1, std::string s2)
{
	size_t		find_pos;
	std::string	line;
	int			i(0);
	std::ifstream infile(in.c_str(), std::ios_base::in);
	if (!infile.is_open())
	{
		std::cerr << "Error while opening infile" << std::endl;
		exit(1);
	}
	std::string	out(in + ".replace");
	std::ofstream outfile(out, std::ios_base::out);
	if (!outfile.is_open())
	{
		std::cerr << "Error while opening outfile" << std::endl;
		exit(1);
	}
	find_pos = 0;
	while (infile.eof() == false)
	{
		std::getline(infile, line);
		find_pos = 0;
		if (i > 0)
			outfile << std::endl;
		while (find_pos != std::string::npos)
		{
			find_pos = line.find(s1, 0);
			if (find_pos == std::string::npos)
				break ;
			line.erase(find_pos, s1.length());
			line.insert(find_pos, s2);
			
		}
		outfile << line;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	infile(av[1]);
		std::string	s1(av[2]);
		std::string	s2(av[3]);
		if (s1.empty() || s2.empty())
		{
			std::cout << "error, string NULL" << std::endl;
			exit(1);
		}
		else if (!av[1] || !*av[1])
		{
			std::cout << "error, need infile" << std::endl;
			exit(1);
		}
		sed(infile, s1, s2);
	}
	else
		std::cout<< "le nombre d'arguments n'est pas bon";
	return (0);
}

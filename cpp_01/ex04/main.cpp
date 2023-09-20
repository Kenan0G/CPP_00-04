/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:17:10 by kgezgin           #+#    #+#             */
/*   Updated: 2023/09/20 17:07:48 by kgezgin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <sys/stat.h>
# include <fcntl.h>
# include <iostream>
# include <string>
# include <unistd.h>

int		ft_open(char *file)
{
	int	fd;

	fd = open(file, O_RDWR);
	if (fd <= 0)
	{
		perror(file);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

int		ft_open_replace(char *file)
{
	int			fd;
	std::string	temp(file);
	std::string	temp_2(".replace");

	temp = temp + temp_2;
	
	printf("%s\n", temp.c_str());
	fd = open(temp.c_str(), O_CREAT | O_RDWR);
	if (fd <= 0)
	{
		perror(temp.c_str());
		exit(EXIT_FAILURE);
	}
	return (fd);
}


void	run_program(char **av)
{
	int				fd;
	int				fd_replace;
	unsigned long	i;
	char			*buf;
	int				check;
	// int			s1_size;
	// int			s2_size;
	std::string		s1(av[2]);
	std::string		s2(av[3]);

	check = 0;
	i = 0;
	buf = NULL;
	fd = ft_open(av[1]);
	fd_replace = ft_open_replace(av[1]);
	while (check > 0)
	{
		check = read(fd, buf, 1);
		printf("buf = [%s]\n", buf);
		if (buf && buf[0] == s1.c_str()[0])
		{
			check = read(fd, buf, s1.size());
			printf("test : buf = [%s]\n", buf);
			if (s1.compare(buf) == 0)
			{
				write(fd_replace, s2.c_str(), s2.size());
				while (i < s1.size())
				{
					check = read(fd, buf, 1);	
					i++;
				}
			}
			else
				write(fd_replace, buf, 1);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		run_program(av);
	else
		std::cout<< "le nombre d'arguments n'est pas bon";
	return (0);
}

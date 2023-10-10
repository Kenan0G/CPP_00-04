# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 14:07:37 by kgezgin           #+#    #+#              #
#    Updated: 2023/10/10 16:09:24 by kgezgin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp

NAME = BraiiiiiiinnnzzzZ

########################### COMPILATION AND FLAGS ###########################

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

##################################### COLOR ##################################

COLOUR_PURPLE = \033[0;35m
COLOUR_END = \033[0m

##################################### MAIN ###################################

all: $(NAME)

##################################### MANDATORY ##############################

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\n\t$(COLOUR_PURPLE)***EXECUTABLE CREATED SUCCESSFULL***\n\n$(COLOUR_END)"

clean:
	rm -rf $(OBJS) $(OBJS_DIR) $(DEPS)
	@echo "\t$(COLOUR_PURPLE)OBJECT DIRECTORY CREATED\n\n$(COLOUR_END)"

fclean: clean
	rm -rf $(NAME)
	@echo "\t$(COLOUR_PURPLE)DELETE EXECUTABLE SUCCESSFULL\n\n$(COLOUR_END)"

re: fclean
	make all

.PHONY: all clean fclean norm re

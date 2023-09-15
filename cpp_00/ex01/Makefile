# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 15:13:12 by kgezgin           #+#    #+#              #
#    Updated: 2023/09/15 17:29:26 by kgezgin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Phonebook.cpp Contact.cpp main.cpp

NAME = phonebook

########################### COMPILATION AND FLAGS ###########################

CC = c++
CFLAGS = -Wall -Werror -Wextra

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

-include $(DEPS)
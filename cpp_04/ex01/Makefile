# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgezgin <kgezgin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 09:41:23 by kgezgin           #+#    #+#              #
#    Updated: 2023/11/08 09:31:12 by kgezgin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR = objs

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp\

OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME = animals

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -g3 # -fsanitize=address


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -MMD -o $(NAME)

$(OBJS_DIR)/%.o : %.cpp | $(OBJS_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJS_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJS) $(OBJS_DIR) $(DEPS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re

-include $(DEPS)
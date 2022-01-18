# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vserra <vserra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 17:09:52 by vserra            #+#    #+#              #
#    Updated: 2022/01/18 17:25:52 by vserra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++ -std=c++98 -Wall -Wextra -Werror
RM			= rm -rf
NAME		= ./megaphone
NAME_SHORT	= megaphone

SRCS		= megaphone.cpp

_OK			= [\033[32mOK\033[0m]

$(NAME)		: $(SRCS)
			@$(CC) $(SRCS) -o $(NAME)
			@echo "$(_OK) $(NAME_SHORT) compiled"

clean		:

fclean		: clean
			@$(RM) $(NAME)

re			: fclean all

.PHONY		: all clean fclean re
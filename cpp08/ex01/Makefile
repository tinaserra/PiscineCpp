# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vserra <vserra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:06:30 by tinaserra         #+#    #+#              #
#    Updated: 2022/02/23 20:00:16 by vserra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  Span.cpp

NAME = Span

# override -> permet de reecrire la suite de la variable
override CXXFLAGS += -std=c++98 -g3 -Wall -Wextra -Werror -MMD

OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
DPD = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.d))

_CREATED = \033[32mCreated!\033[0m
_DELETED = \033[1;34mdeleted\033[0m

all: $(NAME)

# permet de pouvoir comparer la derniere modification de la dep par rapport a la regle
$(NAME): $(OBJ)
		@c++ $(CXXFLAGS) -o $(NAME) $(OBJ)
		@echo "[$(NAME)]: $(_CREATED)"

# si le .cpp est plus recent que le .o on rentre dans la regle
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | .gitignore
		@mkdir -p $(OBJ_DIR)
		@c++ $(CXXFLAGS) -I $(INC_DIR) -c $< -o $@

.gitignore:
		@echo $(NAME) > .gitignore
		@echo $(OBJ_DIR) >> .gitignore

debug : fclean
	make all CXXFLAGS:="-DDEBUG -g"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "obj $(_DELETED)"

fclean:	clean
	@rm -rf $(NAME)
	@echo "[$(NAME)]: $(_DELETED)"

re: fclean all

.PHONY: all, clean, fclean, re

# Utilise les .d (et ignore s'ils n'existe pas)
-include $(DPD)

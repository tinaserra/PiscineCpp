SRC = main.cpp \
	  Weapon.cpp \
	  HumanA.cpp \
	  HumanB.cpp

NAME = unnecessaryViolence

# override -> permet de reecrire la suite de la variable
override CXXFLAGS += -std=c++98 -Wall -Wextra -Werror -MMD

OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))
DPD = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.d))

_CREATED = \033[32mCreated !\033[0m

all: $(NAME)

# permet de pouvoir comparer la derniere modification de la dep par rapport a la regle
$(NAME): $(OBJ)
		@clang++ $(CXXFLAGS) -o $(NAME) $(OBJ)
		@echo "$(NAME) : $(_CREATED)"

# si le .cpp est plus recent que le .o on rentre dans la regle
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | .gitignore
		@mkdir -p $(OBJ_DIR)
		@clang++ $(CXXFLAGS) -I $(INC_DIR) -c $< -o $@

.gitignore:
		@echo $(NAME) > .gitignore
		@echo $(OBJ_DIR) > .gitignore

debug : fclean
	make all CXXFLAGS:="-DDEBUG -g"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "obj deleted"

fclean:	clean
	@rm -rf $(NAME)
	@echo "[$(NAME)]: deleted"

re: fclean all

.PHONY: all, clean, fclean, re

# Utilise les .d (et ignore s'ils n'existe pas)
-include $(DPD)
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CXX			= c++
NAME		= a.out
OBJ_DIR		= obj

HEADER		= Fixed.hpp Point.hpp
SRC_MAIN	= main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJECTS_MAIN = $(SRC_MAIN:%.cpp=$(OBJ_DIR)/%.o)
OBJECTS = $(OBJECTS_MAIN)

NO_COLOR = \033[0m
RED = \033[31m
GREEN = \033[32;5m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36;5m

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp $(HEADER) | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(CYAN)Compiled $<$(NO_COLOR)"

$(NAME): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)
	@echo "$(GREEN)Executable created!$(NO_COLOR)"

clean:
	@echo "$(YELLOW)Cleaning...$(NO_COLOR)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)Full Cleaning...$(NO_COLOR)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

CXXFLAGS	= -Wall -Werror -Wextra -Wno-shadow -std=c++98
CXX			= c++
NAME		= polymorph

HEADER		= includes/Animal.hpp includes/Dog.hpp includes/Cat.hpp \
				includes/WrongAnimal.hpp includes/WrongCat.hpp includes/Brain.hpp
SRC_MAIN	= main.cpp sources/Animal.cpp sources/Dog.cpp sources/Cat.cpp \
				sources/WrongAnimal.cpp sources/WrongCat.cpp sources/Brain.cpp

NO_COLOR = \033[0m
RED = \033[31m
GREEN = \033[32;5m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36;5m

all: $(NAME)

$(NAME): $(SRC_MAIN)
	@$(CXX) $(CXXFLAGS) $(SRC_MAIN) -o $(NAME) 
	@echo "$(GREEN)Executable created!$(NO_COLOR)"

clean:
	@echo "$(YELLOW)Cleaning...$(NO_COLOR)"

fclean: clean
	@echo "$(RED)Full Cleaning...$(NO_COLOR)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

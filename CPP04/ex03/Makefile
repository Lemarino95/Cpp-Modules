CXXFLAGS	= -Wall -Werror -Wextra -Wno-shadow -std=c++98
CXX			= clang++
NAME		= polymorph

HEADER		= includes/AMateria.hpp includes/ICharacter.hpp includes/Character.hpp \
				includes/Ice.hpp includes/Cure.hpp includes/IMateriaSource.hpp includes/MateriaSource.hpp
SRC_MAIN	= main.cpp sources/AMateria.cpp sources/Character.cpp sources/Ice.cpp \
				sources/Cure.cpp sources/MateriaSource.cpp

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

NAME		= fragtrap
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) ${CPPFLAGS} -o $(NAME) $(OBJ)

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
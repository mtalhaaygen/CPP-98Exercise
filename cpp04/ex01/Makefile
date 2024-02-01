NAME		= animal
CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -g -std=c++98
SOURCE		= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS		= $(SOURCE:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re

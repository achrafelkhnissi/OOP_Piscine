CC=c++

CPPFLAGS=-Wall -Wextra -Werror 
CPPSTD=-std=c++98

OBJDIR=obj

NAME=solid

HEADERS=Shape.hpp Circle.hpp Triangle.hpp
SRC=main.cpp
OBJ=$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

ifeq ($(DEBUG), 1)
	CPPFLAGS+=-g
endif

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(CPPFLAGS) $(CPPSTD) $(OBJ) -o $@

$(OBJDIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(OBJDIR)
	$(CC) $(CPPFLAGS) $(CPPSTD) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

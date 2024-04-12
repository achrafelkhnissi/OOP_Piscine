CC=c++

CPPFLAGS=-Wall -Wextra -Werror 
CPPSTD=-std=c++98

OBJDIR=obj

NAME=relationship

HEADERS=Worker.hpp Shovel.hpp Hammer.hpp Tool.hpp Workshop.hpp
SRC=main.cpp Worker.cpp Shovel.cpp Hammer.cpp Workshop.cpp
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

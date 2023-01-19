NAME= a.out
CXX = c++
CPPFLAGS= -std=c++98 
SRC= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME = identify

SRC =	main.cpp \
		Base.cpp \
		A.cpp \
		B.cpp \
		C.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):$(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	clang++ $(CFLAGS) -c $< -o$@

clean:
	@rm -f $(OBJ)

fclean:clean
	@rm -f $(NAME)

re: fclean all
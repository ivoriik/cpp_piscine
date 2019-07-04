# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 21:49:12 by vbespalk          #+#    #+#              #
#    Updated: 2019/07/04 21:49:13 by vbespalk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRC =	whatever.cpp 

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
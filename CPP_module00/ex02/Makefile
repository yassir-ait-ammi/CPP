# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 15:17:39 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/15 17:55:17 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = bank

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)


all: $(NAME)


$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

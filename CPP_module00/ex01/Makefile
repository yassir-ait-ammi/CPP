# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 20:24:20 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/17 15:23:33 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
CFLGS = -Wall -Wextra -Werror -std=c++98
NAME = My_Awesome_PhoneBook
SRC = My_Awesome_PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(C++) $(CFLGS) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all

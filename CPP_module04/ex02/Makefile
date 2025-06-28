# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 18:34:24 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/27 09:36:19 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLGS = -Wall -Wextra -Werror -std=c++98
NAME = Animal
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(C++) $(FLGS) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(C++) $(FLGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/19 14:43:12 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/19 15:21:21 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLGS = -Wall -Wextra -Werror -std=c++98
NAME = ZombieARR
SRCS = Zombie.cpp zombieHorde.cpp main.cpp
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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/21 09:43:42 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/21 09:45:08 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLGS = -Wall -Wextra -Werror -std=c++98
NAME = Fixed
SRCS = main.cpp Fixed.cpp
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

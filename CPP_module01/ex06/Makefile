# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 11:10:13 by yaait-am          #+#    #+#              #
#    Updated: 2025/06/20 11:35:17 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLGS = -Wall -Wextra -Werror -std=c++98
NAME = harlFilter
SRCS = main.cpp Harl.cpp
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

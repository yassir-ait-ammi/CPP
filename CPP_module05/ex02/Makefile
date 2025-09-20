# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaait-am <yaait-am@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/22 16:02:00 by yaait-am          #+#    #+#              #
#    Updated: 2025/09/20 16:01:56 by yaait-am         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
FLGS = -Wall -Wextra -Werror -std=c++98
NAME = Bureaucrat
SRCS = Bureaucrat.cpp main.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp AForm.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(C++) $(FLGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(C++) $(FLGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f home_shrubbery
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

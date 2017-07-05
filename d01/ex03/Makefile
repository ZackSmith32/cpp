# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 15:22:15 by zsmith            #+#    #+#              #
#    Updated: 2017/07/04 17:52:24 by zsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

OBJECTS		=	Zombie.o		\
				main.o			\
				ZombieHorde.o	

HEADERS		=	.

CLANG		=	clang++

CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CLANG) $(CXXFLAGS) $(OBJECTS) -o $@

%.o:%.cpp
	$(CLANG) $(CXXFLAGS) $^ -c -o $@ -I $(HEADERS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
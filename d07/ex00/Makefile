# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 15:22:15 by zsmith            #+#    #+#              #
#    Updated: 2017/07/12 22:19:02 by zsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	whatever

OBJECTS		=	\
				whatever.o				\
			

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
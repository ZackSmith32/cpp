# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 11:45:51 by zsmith            #+#    #+#              #
#    Updated: 2017/07/03 13:06:41 by zsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

OBJECTS		=	megaphone.o

CLANG		=	clang++

CXXFLAGS	=	-Wall -Werror -Wextra

all: $(NAME)


$(NAME): $(OBJECTS)
	$(CLANG) $(CXXFLAGS) $(OBJECTS) -o $@

%.o:%.cpp
	$(CLANG) $(CXXFLAGS) $^ -c -o $@ 

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re fclean clean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/05 15:36:08 by vlistrat          #+#    #+#              #
#    Updated: 2015/12/07 15:42:00 by vlistrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = *.c

OBJ = $(SRC:.c=.o)

LIB = lft

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

$(OBJ):
	gcc -c $(SRC) -L. -$(LIB) -Wall -Werror -Wextra

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

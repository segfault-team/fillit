# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/05 15:36:08 by vlistrat          #+#    #+#              #
#    Updated: 2015/12/07 18:24:42 by vlistrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	  ft_aff.c \
	  ft_convert.c \
	  ft_fill.c \
	  ft_read.c \
	  ft_valid.c \

OBJ = $(SRC:.c=.o)

LIB = lft

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -L. -$(LIB)

$(OBJ):
	gcc -c $(SRC) -Wall -Werror -Wextra

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

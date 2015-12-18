# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/05 15:36:08 by vlistrat          #+#    #+#              #
#    Updated: 2015/12/17 20:03:23 by vlistrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = main.c \
	  ft_aff.c \
	  ft_convert.c \
	  ft_fill.c \
	  ft_read.c \
	  ft_valid.c \
	  ft_tetrivalid.c \
	  ft_one_five.c \
	  ft_six_ten.c \
	  ft_eleven_fifteen.c \
	  ft_sixteen_nineteen.c \
	  ft_is_tetri.c \
	  ft_beginlist.c \
	  ft_fillmaillon.c \
	  ft_s_one_five.c\
	  ft_s_six_ten.c \
	  ft_s_eleven_fifteen.c \
	  ft_s_sixteen_nineteen.c \
	  ft_map.c \
	  ft_solve3.c \
	  ft_list_prev.c

OBJ = $(SRC:.c=.o)

LIB = lft

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -L. -$(LIB)

$(OBJ):
	gcc -c $(SRC)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

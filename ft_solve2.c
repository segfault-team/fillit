/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:49:06 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/17 17:52:08 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

tatic int			ft_lst_len(t_flist *lst)
{
	int 		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*
 *  * a enlever une fois fillit fini
 *   */
void	ft_putdstr(char	**str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		ft_putendl(str[i]);
		i++;
	}
}

void			ft_print_tetri(t_flist *lst, char **map, int j, int k)
{
	map[j + lst->y][k + lst->x] = lst->letter;
	map[j + lst->y1][k + lst->x1] = lst->letter;
	map[j + lst->y2][k + lst->x2] = lst->letter;
	map[j + lst->y3][k + lst->x3] = lst->letter;
}

static int		ft_map_len(char **map)
{
	int		i;

	i = 0;
	while (map[i] != NULL)
		i++;
	return (i);
}

static char **ft_clear(char **map, int size)
{
	char	**cpy;
	int i;
	int j;
	i = 0;
	free(map);
	cpy = ft_map(cpy, size);
	return (cpy);
}

char	**ft_solve(t_flist *lst, char **map, int j, int k)
{
	int		j2;
	int		k2;
	int		j3;
	int		k3;
	int		*tab;
	t_flist *begin_list;

	begin_list = lst;
	while (lst)
	{
		j = 0;
		k = 0;
		tab = ft_find_pos(lst, map, j, k);
		if (map[tab[0]] == NULL && lst->prev != NULL)
		{
			ft_clear_last(map, lst, lst->prev->pos_y, lst->prev->pos_x)
			lst = lst->prev;
			lst->pos_x++;
			if (map[lst->pos_y][lst->pos_x] == '\0')
			{
				lst->pos_x = 0;
				lst->pos_y++;
			}
			tab = ft_find_pos(lst, map, lst->pos_y, lst->pos_x);
			while (map[tab[0]] == NULL)
			{
				
			}
		}
		else if ()
		ft_print_tetri(lst, map, j, k);
		lst->pos_x = k;
		lst->pos_y = j;
		lst = lst->next;
	}

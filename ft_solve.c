/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:10:35 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 18:26:58 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void				ft_print_tetri(t_flist *lst, char **map, int j, int k)
{
	map[j + lst->y][k + lst->x] = lst->letter;
	map[j + lst->y1][k + lst->x1] = lst->letter;
	map[j + lst->y2][k + lst->x2] = lst->letter;
	map[j + lst->y3][k + lst->x3] = lst->letter;
}

static int			ft_map_len(char **map)
{
	int		i;

	i = 0;
	while (map[i] != NULL)
		i++;
	return (i);
}

static t_flist		*ft_print_pos(t_flist *lst, char **map, int *tab)
{
	ft_print_tetri(lst, map, tab[0], tab[1]);
	lst->pos_y = tab[0];
	lst->pos_x = tab[1];
	lst = lst->next;
	return (lst);
}

static t_flist		*ft_come_back(t_flist *lst, char **map, int *tab)
{
	lst = lst->prev;
	ft_clear_last(map, lst, lst->pos_y, lst->pos_x);
	lst->pos_x++;
	return (lst);
}

char				**ft_solve(t_flist *lst, char **map, int j, int k)
{
	int		*tab;
	t_flist	*begin_list;

	begin_list = lst;
	tab = ft_find_pos(lst, map, 0, 0);
	while (lst)
	{
		while (tab[1] > -1)
		{
			lst = ft_print_pos(lst, map, tab);
			tab = ft_find_pos(lst, map, 0, 0);
		}
		while (tab[1] == -1)
		{
			lst = ft_come_back(lst, map, tab);
			tab = ft_find_pos(lst, map, lst->pos_y, lst->pos_x);
			if (lst == begin_list && tab[1] == -1)
			{
				begin_list->size++;
				map = ft_clear(map, begin_list->size);
				tab = ft_find_pos(lst, map, 0, 0);
			}
		}
	}
	return (map);
}

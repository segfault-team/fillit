/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 16:10:35 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 17:54:00 by vlistrat         ###   ########.fr       */
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

static char			**ft_clear(char **map, int size)
{
	char	**cpy;
	int		i;
	int		j;

	i = 0;
	free(map);
	cpy = ft_map(cpy, size);
	return (cpy);
}

static void			ft_reset_pos(t_flist *lst)
{
	while (lst)
	{
		lst->pos_x = 0;
		lst->pos_y = 0;
		lst = lst->next;
	}
}

char				**ft_solve(t_flist *lst, char **map, int j, int k)
{
	int		size;
	int		*tab;
	t_flist	*begin_list;

	begin_list = lst;
	size = lst->size;
	tab = ft_find_pos(lst, map, 0, 0);
	while (lst)
	{
		while (tab[1] > -1)
		{
			ft_print_tetri(lst, map, tab[0], tab[1]);
			lst->pos_y = tab[0];
			lst->pos_x = tab[1];
			lst = lst->next;
			tab = ft_find_pos(lst, map, 0, 0);
		}
		while (tab[1] == -1)
		{
			lst = lst->prev;
			ft_clear_last(map, lst, lst->pos_y, lst->pos_x);
			lst->pos_x++;
			tab = ft_find_pos(lst, map, lst->pos_y, lst->pos_x);
			if (lst == begin_list && tab[1] == -1)
			{
				size++;
				map = ft_clear(map, size);
				ft_reset_pos(lst);
				tab = ft_find_pos(lst, map, 0, 0);
			}
		}
	}
	return (map);
}

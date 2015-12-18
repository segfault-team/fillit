/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:25:21 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 13:13:16 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_lst_len(t_flist *lst)
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
	ft_putchar('\n');
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

static void		ft_reset_pos(t_flist *lst)
{
	while (lst)
	{
		lst->pos_x = 0;
		lst->pos_y = 0;
		lst = lst->next;
	}
}
/*
char	**ft_solve(t_flist *lst, char **map, int j, int k)
{
	int		size;
	int		*tab;
	t_flist	*tmp;
	t_flist	*begin_list;

	begin_list = lst;
	size = lst->size;
	tab = ft_find_pos(lst, map, 0, 0);
	while (lst)
	{
		while (tab[1] != -1)
		{
			ft_print_tetri(lst, map, tab[0], tab[1]);
			ft_putdstr(map);
			lst->pos_y = tab[0];
			lst->pos_x = tab[1];
			lst = lst->next;
			tab = ft_find_pos(lst, map, tab[0], tab[1]);
		}
		if (tab[1] == -1)
		{
			lst = lst->prev;
		//	tmp = lst;
			ft_clear_last(map, lst, lst->pos_y, lst->pos_x);
			ft_putdstr(map);
			while (tab[1] == -1)
			{
				lst->pos_x++;
				ft_putnbr(lst->pos_x);
				ft_putchar('\n');
				tab = ft_find_pos(lst, map, lst->pos_y, lst->pos_x);
				lst->pos_y = tab[0];
				lst->pos_x = tab[1];
				if (tab[1] > -1)
				{
					ft_print_tetri(lst, map, tab[0], tab[1]);
					ft_putdstr(map);
					lst = lst->next;
					tab = ft_find_pos(lst, map, 0, 0);
				}
				if (tab[0] == ft_strlen(map[0]) && lst != begin_list)
				{
					lst = lst->prev;
					// & if lst != tmp
				}
				if (lst == begin_list && ft_ret_char(lst->pos_y, lst->pos_x, lst, map) < 0)
				{
					size++;
					map = ft_clear(map, size);
					ft_reset_pos(lst);
					lst = begin_list;
					tab = ft_find_pos(lst, map, 0, 0);
				}
			}
		}
	}
	return (map);
}*/

/*
 ** inclure debut du if tab[1] == -1 dans le while, revenir sur prev, tester, si pas d'autres choix revenir sur prev, si autre choix passer a next, si prev == begin list, bouger begin list, si begin list n'a pas d'autres choix, agrandir, sinon reprendre le cycle de tests.
*/

char	**ft_solve(t_flist *lst, char **map, int j, int k)
{
	int		size;
	int		*tab;
	t_flist	*begin_list;

	begin_list = lst;
	size = lst->size;
	ft_putdstr(map);
	tab = ft_find_pos(lst, map, 0, 0);
	ft_putchar(lst->letter);
	ft_putnbr(tab[0]);
	ft_putchar(' ');
	ft_putnbr(tab[1]);
	ft_putchar('\n');
	while (lst)
	{
		while (tab[1] > -1)
		{
		DEBUG
			ft_print_tetri(lst, map, tab[0], tab[1]);
			ft_putdstr(map);
			lst->pos_y = tab[0];
			lst->pos_x = tab[1];
			lst = lst->next;
			tab = ft_find_pos(lst, map, 0, 0);
	/*		ft_putchar(lst->letter);
			ft_putnbr(tab[0]);
			ft_putchar(' ');
			ft_putnbr(tab[1]);
			ft_putchar('\n');*/
		}
		while (tab[1] == -1)
		{
			lst = lst->prev;
			ft_clear_last(map, lst, lst->pos_y, lst->pos_x);
			ft_putdstr(map);
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
		if (tab[1] == -2)
			return (map) ;
	}
	return (map);
}

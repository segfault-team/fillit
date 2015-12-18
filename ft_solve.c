/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:05:59 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/17 17:52:11 by ddupart          ###   ########.fr       */
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
 * a enlever une fois fillit fini
 */
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
	int		size;
	int		j2;
	int		k2;
	int		j3;
	int		k3;
	t_flist	*begin_list;

	j2 = 0;
	k2 = 1;
	j3 = 0;
	k3 = 1;
	begin_list = lst;
	size = lst->size;
	while (lst)
	{
		j = 0;
		k = 0;
			while (j < ft_strlen(map[0]) && ft_ret_char(j, k, lst, map) < 0 && map[j3] && map[j2])
			{
				k++;
				if (map[j][k] == '\0')
				{
					j++;
					k = 0;
				}
				if (map[j] == NULL && lst && ft_ret_char(j3, k3, lst, map) < 0)
				{
					ft_clear_last(map, lst->prev, lst->prev->pos_y, lst->prev->pos_x);
					j3 = 0;
					k3 = 1;

					while (ft_ret_char(j3, k3, lst->prev, map) < 0 && map[j3])
					{
						k3++;
						if (map[j3][k3] == '\0')
						{
							j3++;
							k3 = 0;
						}
					}
						ft_print_tetri(lst->prev, map, j3, k3);
						lst->prev->pos_x = k3;
						lst->prev->pos_y = j3;
				}
				else if (lst && j3 == lst->prev->pos_y && k3 == lst->prev->pos_x)
				{
					DEBUG
					j = 0;
					size++;
					map = ft_clear(map, 7);
					lst = begin_list;
					if (k2 == ft_strlen(map[j]) - 1)
					{
						k2 = 0;
						j2++;
					}
					ft_print_tetri(lst, map, j2, k2);
						lst->pos_x = k2;
						lst->pos_y = j2;
					lst = lst->next;
					k2++;
				}
			}
		ft_putdstr(map);
		ft_putchar('\n');
		if (j == ft_strlen(map[0]))
			j--;
		if (ft_ret_char(j, k, lst, map) > 0)
		{
			ft_print_tetri(lst, map, j, k);
			lst->pos_x = k;
			lst->pos_y = j;
			lst = lst->next;
		}
		ft_putdstr(map);
		ft_putchar('\n');
	}
	return (map);
}

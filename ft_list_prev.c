/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:40:35 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/22 16:22:11 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_flist			*ft_list_prev(t_flist *lst)
{
	while (lst->next)
	{
		lst->next->prev = lst;
		lst = lst->next;
	}
	return (lst);
}

char			**ft_clear_last(char **map, t_flist *lst, int j, int k)
{
	map[j + lst->y][k + lst->x] = '.';
	map[j + lst->y1][k + lst->x1] = '.';
	map[j + lst->y2][k + lst->x2] = '.';
	map[j + lst->y3][k + lst->x3] = '.';
	return (map);
}

static void		ft_fill_tab(int *tab, int j, int k)
{
	tab[0] = j;
	tab[1] = k;
}

int				*ft_find_pos(t_flist *lst, char **map, int j, int k)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(*tab) * 2)))
		return (NULL);
	while (lst && ft_ret_char(j, k, lst, map) < 0 && map[j] != NULL)
	{
		k++;
		if (map[j][k] == '\0')
		{
			j++;
			k = 0;
		}
	}
	if (!lst)
	{
		ft_fill_tab(tab, -2, -2);
		return (tab);
	}
	if (map[j] == NULL)
	{
		ft_fill_tab(tab, j, -1);
		return (tab);
	}
	ft_fill_tab(tab, j, k);
	return (tab);
}

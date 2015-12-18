/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:40:35 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/18 17:48:15 by vlistrat         ###   ########.fr       */
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

int				*ft_find_pos(t_flist *lst, char **map, int j, int k)
{
	int		*tab;

	tab = (int*)malloc(sizeof(*tab) * 2);
	if (tab == NULL)
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
		tab[0] = -2;
		tab[1] = -2;
		return (tab);
	}
	if (map[j] == NULL)
	{
		tab[0] = j;
		tab[1] = -1;
		return (tab);
	}
	tab[0] = j;
	tab[1] = k;
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:46:12 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 17:47:31 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_map(char **map, int size)
{
	int		i;
	int		j;

	i = 0;
	map = (char**)malloc(sizeof(*map) * size + 1);
	while (i < size)
	{
		map[i] = (char*)malloc(sizeof(*map) * size + 1);
		j = 0;
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][j] = '\0';
		i++;
	}
	map[i] = NULL;
	return (map);
}

int			ft_ret_char(int j, int k, t_flist *lst, char **map)
{
	int		max;

	max = ft_strlen(map[0]) - 1;
	if (j + lst->y > max || k + lst->x > max
			|| j + lst->y1 > max || k + lst->x1 > max
				|| j + lst->y2 > max || k + lst->x2 > max
					|| j + lst->y3 > max || k + lst->x3 > max)
		return (-2);
	if ((map[j + lst->y][k + lst->x] != '.')
			|| (map[j + lst->y1][k + lst->x1] != '.')
				|| (map[j + lst->y2][k + lst->x2] != '.')
					|| (map[j + lst->y3][k + lst->x3] != '.'))
		return (-1);
	return (1);
}

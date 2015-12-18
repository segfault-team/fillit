/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 17:50:14 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_count_ret(char ***ret)
{
	int		i;

	i = 0;
	while (ret[i] != NULL)
		i++;
	return (i - 1);
}

int				ft_tetri_count(char ***ret)
{
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	while (ret[i])
	{
		j = 0;
		count = 0;
		while (ret[i][j])
		{
			k = 0;
			while (ret[i][j][k])
			{
				if (ret[i][j][k] == '#')
					count++;
				k++;
			}
			j++;
		}
		if (count != 4)
			return (-1);
		i++;
	}
	return (2);
}

t_flist			*ft_tetri_pos(char ***ret, t_flist *newlist)
{
	int			i;
	int			j;
	int			k;
	t_flist		*m;
	t_flist		*m2;

	i = 0;
	while (ret[i])
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4 && ret[i][j][k] != '#')
				k++;
			if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) > 0)
			{
				if (i == 0)
				{
					m = ft_fillmaillon(m, ft_is_tetri(ret[i], j, k), i);
					newlist = m;
					i++;
					j = 4;
				}
				else if (i > 0)
				{
					m2 = ft_fillmaillon(m2, ft_is_tetri(ret[i], j, k), i);
					newlist->next = m2;
					newlist = newlist->next;
					i++;
					j = 4;
				}
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
			{
				m = NULL;
				return (m);
			}
			j++;
		}
	}
	return (m);
}

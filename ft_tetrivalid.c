/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 18:31:54 by ddupart          ###   ########.fr       */
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

	i = -1;
	while (ret[++i])
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
	}
	return (2);
}

static t_flist	*ft_list(char ***ret, int i, int tetri, t_flist *b_list)
{
	t_flist		*m;

	if (i == 0)
	{
		m = ft_fillmaillon(m, tetri, i);
		b_list = m;
	}
	return (m);
}

static t_flist	*ft_alist(char ***ret, int i, int tetri, t_flist *b_list)
{
	t_flist		*m2;

	if (i > 0)
	{
		m2 = ft_fillmaillon(m2, tetri, i);
		b_list->next = m2;
		b_list = b_list->next;
	}
	return (m2);
}

t_flist			*ft_pos(char ***ret, t_flist *b_list, int i, int j)
{
	int			k;
	t_flist		*m;

	i = -1;
	while (ret[++i])
	{
		j = -1;
		while (++j < 4)
		{
			k = 0;
			while (k < 4 && ret[i][j][k] != '#')
				k++;
			if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) > 0)
			{
				b_list = ft_list(ret, i, ft_is_tetri(ret[i], j, k), b_list);
				if (i == 0)
					m = b_list;
				b_list = ft_alist(ret, i, ft_is_tetri(ret[i], j, k), b_list);
				j = 4;
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
				return (NULL);
		}
	}
	return (m);
}

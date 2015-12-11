/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/11 16:38:50 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_tetri_count(char ***ret)
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
		if (k != 4)
			return (-1);
		i++;
	}
	return (1);
}

t_flist			**ft_tetri_pos(char ***ret, t_flist begin_list)
{
	int			i;
	int			j;
	int			k;
	t_flist		*maillon;
	t_flist		*maillon2;

	maillon = NULL;
	maillon2 = NULL;
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
					maillon = ft_fillmaillon(maillon, ft_is_tetri(ret[i], j, k));
					maillon->next = *begin_list;
					*begin_list = maillon;
					i++;
					j = 4;
				}
				else
				{
					maillon2 = ft_fillmaillon(maillon2, ft_is_tetri(ret[i], j, k));
					maillon2->next = *begin_list;
					*begin_list = maillon2;
					i++;
					j = 4;
				}
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
			{
				begin_list = NULL;
				return (begin_list);											//si tetri invalide on return NULL, afficher "error"
			}
			j++;
		}
	}
	begin_list = &maillon;
	return (begin_list);
}

t_flist				**ft_tetrivalid(char ***ret, t_flist **begin_list)
{
	if (ft_tetri_count(ret) < 0)
	{
		begin_list = NULL;
		return (begin_list);
	}
	else if (!(ft_tetri_pos(ret, begin_list)))
	{
		begin_list = NULL;
		return (begin_list);
	}
	return (ft_tetri_pos(ret, begin_list));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/11 20:42:27 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_count_ret(char ***ret)
{
	int 		i;

	i = 0;
	while (ret[i] != NULL)
		i++;
	return (i - 1);
}

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

static void		ft_flstadd(t_flist **begin_list, t_flist *maillon)
{
	maillon->next = *begin_list;
	begin_list = &maillon;
}


t_flist			*ft_tetri_pos(char ***ret, t_flist **begin_list)
{
	int			i;
	int			j;
	int			k;
	t_flist		*maillon;

	i = ft_count_ret(ret);
	while (i >= 0)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4 && ret[i][j][k] != '#')
				k++;
			if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) > 0)
			{
				if (i == ft_count_ret(ret))
				{
					maillon = ft_fillmaillon(maillon, ft_is_tetri(ret[i], j, k));
					begin_list = &maillon;
					i--;
					j = 4;
				}
				else if (i < ft_count_ret(ret)) 
				{
					maillon = ft_fillmaillon(maillon, ft_is_tetri(ret[i], j, k));
					ft_flstadd(begin_list, maillon);
					i--;
					j = 4;
				}
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
			{
				maillon = NULL;
				return (maillon);
			}
			j++;
		}
	}
	return (maillon);
}

int				ft_tetrivalid(char ***ret, t_flist **begin_list)
{
	if (ft_tetri_count(ret) < 0)
		return (-1);
	else if (ft_tetri_pos(ret, begin_list) == NULL)
		return (-1);
	return (1);
}

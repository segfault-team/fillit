/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/09 12:32:36 by vlistrat         ###   ########.fr       */
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

t_list			*ft_tetri_pos(char ***ret, t_list *begin_list)
{
	int		i;
	int		j;
	int		k;
	t_list	maillon;

	maillon = begin_list;												//on set le maillon sur le debut de la liste
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
				ft_fillmaillon(maillon, ft_is_tetri(ret[i], j, k));		//si un tetri est reconnu valide, on stocke ses valeurs absolues dans maillon
				maillon = maillon->next;								//si correct on passe au maillon suivant
				i++;
				j = 4;
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
				return (NULL);											//si tetri invalide on return NULL, afficher "error"
			j++;
		}
	}
	return (begin_list);
}

t_list				*ft_tetrivalid(char ***ret, t_list *begin_list)
{
	if (ft_tetri_count(ret) < 0)
		return (-1);
	else if (ft_tetri_pos(ret, begin_list) < 0)
		return (-1);
	return (1);
}

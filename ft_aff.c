/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:02:56 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 18:29:02 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_aff(char ***ret, char *buf)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (ret[i] != NULL)
	{
		while (ret[i][j] != NULL)
		{
			ft_putendl(ret[i][j]);
			j++;
		}
		if (i != ft_count(buf) - 1)
			ft_putchar('\n');
		i++;
		j = 0;
	}
}

char	**ft_clear(char **map, int size)
{
	char	**cpy;
	int		i;
	int		j;

	i = 0;
	free(map);
	cpy = ft_map(cpy, size);
	return (cpy);
}

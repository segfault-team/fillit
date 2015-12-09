/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:05:25 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/09 12:05:50 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_ret_size(char ***ret)
{
	int	i;

	i = 0;
	while (ret[i])
		i++;
	return (i);
}

int	**ft_coord(char ***ret)
{
	int	**coord;
	int	i;

	i = 0;
	coord = (int**)malloc(sizeof(*coord) * ft_ret_size(ret));
	while (i < ft_ret_size(ret))
	{
		coord[i] = (int*)malloc(sizeof(coord) * 9);
		i++;
	}
	return (coord);
}

int	**ft_fill_coord(int i, int j, int k, int **coord)
{
	coord[i][0] = j;
	coord[i][1] = k;
	return (coord);
}

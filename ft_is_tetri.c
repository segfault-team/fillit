/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:07:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 16:21:17 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_part_one(char **ret, int j, int k)
{
	if (ft_one(ret, j, k) == 1)
		return (1);
	else if (ft_two(ret, j, k) == 1)
		return (2);
	else if (ft_three(ret, j, k) == 1)
		return (3);
	else if (ft_four(ret, j, k) == 1)
		return (4);
	else if (ft_five(ret, j, k) == 1)
		return (5);
	else if (ft_six(ret, j, k) == 1)
		return (6);
	else if (ft_seven(ret, j, k) == 1)
		return (7);
	else if (ft_eight(ret, j, k) == 1)
		return (8);
	else if (ft_nine(ret, j, k) == 1)
		return (9);
	else if (ft_ten(ret, j, k) == 1)
		return (10);
	else if (ft_eleven(ret, j, k) == 1)
		return (11);
	else
		return (-1);
}

int	ft_part_two(char **ret, int j, int k)
{
	if (ft_twelve(ret, j, k) == 1)
		return (12);
	else if (ft_thirteen(ret, j, k) == 1)
		return (13);
	else if (ft_fourteen(ret, j, k) == 1)
		return (14);
	else if (ft_fifteen(ret, j, k) == 1)
		return (15);
	else if (ft_sixteen(ret, j, k) == 1)
		return (16);
	else if (ft_seventeen(ret, j, k) == 1)
		return (17);
	else if (ft_eighteen(ret, j, k) == 1)
		return (18);
	else if (ft_nineteen(ret, j, k) == 1)
		return (19);
	else
		return (-1);
}

int	ft_is_tetri(char **ret, int j, int k)
{
	if (ft_part_one(ret, j, k) > 0)
		return (ft_part_one(ret, j, k));
	else if (ft_part_two(ret, j, k) > 0)
		return (ft_part_two(ret, j, k));
	else
		return (-1);
}

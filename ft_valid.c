/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 12:07:24 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 12:49:19 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valid_grid(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf)
	{
		j = 0;
		while (j < 4)
		{
			if (buf[i] != '.' || buf[i] != '#')
				return (-1);
			j++;
			i++;
		}
		if (buf[i] != '\n')
			return (-1);
		i++;
		if (buf[i] != '\n' && i != (int)ft_strlen(buf) - 1 && (i + 1) % 22 == 0)
			return (-1);
	}
	return (1);
}

int		ft_count(char *buf)
{
	int		i;
	int		ret;

	i = 0;
	ret = 1;
	while (buf[i])
	{
		if (((i + 1) % 22) == 0 && buf[i] == '\n')
			ret++;
		i++;
	}
	return (ret);
}

int		ft_valid_tetri(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf)
	{
	}
}

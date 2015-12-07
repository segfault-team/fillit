/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 12:07:24 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 18:10:26 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_case(char c)
{
	if (c == '.' || c == '#')
		return (1);
	return (-1);
}

int		ft_valid_grid(char *buf, int ret)
{
	int		i;
	int		j;
	int		loop;

	i = 0;
	loop = 0;
	while (i < ret)
	{
		loop = 0;
		while (loop < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (buf[i] != '.' && buf[i] != '#')
					return (-1);
				j++;
				i++;
			}
			if (buf[i] != '\n')
				return (-1);
			else if (buf[i] == '\n' && buf[i + 1] == '\n' && loop < 3)
				return (-1);
			i++;
			loop++;
		}
		if (buf[i] == '\n' && buf[i + 1] == '\0')
			return (-1);
		else if (buf[i] == '\n' && ft_case(buf[i + 1]) != 1)
			return (-1);
		i++;
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
		if (((i + 1) % 22) == 0)
			ret++;
		i++;
	}
	return (ret);
}

/*int		ft_valid_tetri(char *buf)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf)
	{
	}
}*/

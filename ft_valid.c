/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 12:07:24 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 17:59:00 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_case(char c)
{
	if (c == '.' || c == '#')
		return (1);
	return (-1);
}

static int		ft_loop(char *buf, int i, int j, int loop)
{
	while (j < 4)
	{
		if (buf[i] != '.' && buf[i] != '#')
			return (-1);
		j++;
		i++;
	}
	return (i);
}

int				ft_valgrid(char *buf, int ret)
{
	int		i;
	int		j;
	int		loop;

	i = 0;
	while (i < ret)
	{
		loop = -1;
		while (++loop < 4)
		{
			if (!(i = ft_loop(buf, i, 0, loop)))
				return (-1);
			if (buf[i] != '\n')
				return (-1);
			else if (buf[i] == '\n' && buf[i + 1] == '\n' && loop < 3)
				return (-1);
			i++;
		}
		if (buf[i] == '\n' && buf[i + 1] == '\0')
			return (-1);
		else if (buf[i] == '\n' && ft_case(buf[i + 1]) != 1)
			return (-1);
		i++;
	}
	return (2);
}

int				ft_count(char *buf)
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

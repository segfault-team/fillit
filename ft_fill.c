/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:55:27 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 16:51:41 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_help_fill(char *buf, char ***ret, int i, int j)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	while (k < 4)
	{
		l = 0;
		while (l < 4)
		{
			ret[j][k][l] = buf[i];
			i++;
			l++;
		}
		if (buf[i] != '\n')
			buf[0] = '9';
		ret[j][k][l] = '\0';
		while (buf[i] == '\n')
			i++;
		k++;
	}
	ret[j][k] = NULL;
}

char			***ft_fill(char *buf, char ***ret)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buf[i])
	{
		while (j < ft_count(buf))
		{
			ft_help_fill(buf, ret, i, j);
			if (buf[0] == '9')
				return (NULL);
			j++;
			i = j * 21;
		}
		ret[j] = NULL;
	}
	return (ret);
}

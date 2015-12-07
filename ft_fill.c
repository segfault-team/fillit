/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:55:27 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 16:01:45 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_fill(char *buf, char ***ret)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (buf[i])
	{
		while (j < ft_count(buf))
		{
			k = 0;
			while (k < 4)
			{
				l = 0;
				while (l < 4)
				{
					ret[j][k][l] = buf[i];
					i++;
					l++;
				}
				ret[j][k][l] = '\0';
				while (buf[i] == '\n')
					i++;
				k++;
			}
			ret[j][k] = NULL;
			j++;
		}
		ret[j] = NULL;
	}
	return (ret);
}

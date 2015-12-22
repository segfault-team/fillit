/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 12:39:16 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 16:53:06 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	***ft_convert(char *buf)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	***ret;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	ret = (char***)malloc(sizeof(**ret) * ft_count(buf) + 1);
	while (i < ft_count(buf) + 1)
	{
		ret[i] = (char**)malloc(sizeof(*ret) * 4 + 1);
		while (j < 5)
		{
			ret[i][j] = (char*)malloc(sizeof(*ret) * 4 + 1);
			j++;
		}
		j = 0;
		i++;
	}
	ret = ft_fill(buf, ret);
	return (ret);
}

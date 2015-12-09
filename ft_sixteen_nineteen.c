/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sixteen_nineteen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:06:20 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/09 12:28:54 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_sixteen(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 2 <= 3)
	{
		if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#'
				&& ret[j + 1][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_seventeen(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k - 1 >= 0)
	{
		if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#'
				&& ret[j + 1][k - 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_eighteen(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 1 <= 3 && k - 1 >= 0)
	{
		if (ret[j + 1][k - 1] == '#' && ret[j + 1][k] == '#'
				&& ret[j + 1][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_nineteen(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k + 1 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#'
				&& ret[j + 1][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

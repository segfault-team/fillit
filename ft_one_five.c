/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:07:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 15:18:32 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_one(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 1 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j][k + 1] == '#'
				&& ret[j + 1][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_two(char **ret, int j, int k)
{
	if (k == 0)
	{
		if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#'
				&& ret[j][k + 3] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_three(char **ret, int j, int k)
{
	if (j == 0)
	{
		if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#'
				&& ret[j + 3][k] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_four(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 2 <= 3)
	{
		if (ret[j][k + 1] == '#' && ret[j + 1][k + 1] == '#'
				&& ret[j + 1][k + 2] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_five(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k - 1 >= 0)
	{
		if (ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#'
				&& ret[j + 2][k - 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

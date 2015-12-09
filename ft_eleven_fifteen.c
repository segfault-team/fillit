/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eleven_fifteen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:07:36 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/09 12:27:51 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_eleven(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k - 2 >= 0)
	{
		if (ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#'
				&& ret[j + 1][k - 2] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_twelve(char **ret, int j, int k)
{
	if (k - 1 >= 0 && j + 2 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#'
				&& ret[j + 2][k - 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_thirteen(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 2 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j + 1][k + 1] == '#'
				&& ret[j + 1][k + 2] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_fourteen(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k + 1 <= 3)
	{
		if (ret[j][k + 1] == '#' && ret[j + 1][k] == '#'
				&& ret[j + 2][k] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_fifteen(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 2 <= 3)
	{
		if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#'
				&& ret[j + 1][k + 2] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetrivalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:40:13 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 21:45:00 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_tetri_count(char ***ret)
{
	int		i;
	int		j;
	int		k;
	int		count;

	i = 0;
	while (ret[i])
	{
		j = 0;
		count = 0;
		while (ret[i][j])
		{
			k = 0;
			while (ret[i][j][k])
			{
				if (ret[i][j][k] == '#')
					count++;
				k++;
			}
			j++;
		}
		if (k != 4)
			return (-1);
		i++;
	}
	return (1);
}

static int		ft_is_tetribis(char **ret, int j, int k)
{

	if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 2][k - 1] == '#')
		return (12); /* J */
//	if (j > 0 && ret[j - 1][k] == '#' && ret[j][k + 1] == '#' && ret[j][k + 2] == '#')
//			return (13);
	/* J  90 degres sens horaire */
	if (ret[j][k + 1] == '#' && ret[j + 1][k] == '#' && ret[j + 2][k] == '#')
		return (14); /* J 180 freestyle */
	if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#' && ret[j + 1][k + 2] == '#')
		return (15); /* J 270 sens horaire */
	if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#' && ret[j + 1][k + 1] == '#')
		return (16); /* T */
	if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 1][k - 1] == '#')
		return (17); /* T 90 sens horaire */
	else if (ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#' && ret[j + 1][k + 1] == '#')
		return (18); /* T 180 */
	else if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 1][k + 1] == '#')
		return (19); /* T 270 sens horaire */
//	else if (j > 0 && ret[j - 1][k] == '#' && ret[j][k + 1] == '#' && ret[j][k + 2] == '#')
//			return (13);
	else
		return (-1);
}

static int		ft_is_tetri(char **ret, int j, int k)
{
	ft_putstr("j = ");
	ft_putnbr(j);
	ft_putchar('\n');
	ft_putstr("k = ");
	ft_putnbr(k);
	ft_putchar('\n');
	if (ret[j][k + 1] == '#' && ret[j + 1][k] == '#' && ret[j + 1][k + 1] == '#')
		return (1); /* carre */
	else if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#' && ret[j][k + 3] == '#')
		return (2); /* ligne horizontale */
	else if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 3][k] == '#')
		return (3); /* ligne verticale */
	else if (ret[j][k + 1] == '#' && ret[j + 1][k + 1] == '#' && ret[j + 1][k + 2] == '#')
		return (4); /* Z */
	else if (ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#' && ret[j + 2][k - 1] == '#')
		return (5); /* Z vertical */
	else if (ret[j][k + 1] == '#' && ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#')
		return (6); /* S */
	else if (ret[j + 1][k] == '#' && ret[j + 1][k + 1] == '#' && ret[j + 2][k + 1] == '#')
		return (7); /* S vertical */
	else if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 2][k + 1] == '#')
		return (8); /* L */
	else if (ret[j + 1][k] == '#' && ret[j][k + 1] == '#' && ret[j][k + 2] == '#')
		return (9); /* L 90 degres sens horaire*/
	else if (ret[j][k + 1] == '#' && ret[j + 1][k + 1] == '#' && ret[j + 2][k + 1] == '#')
		return (10); /* L 180 degres sens horaire*/
	else if (ret[j][k + 1] == '#' && ret[j][k + 2] == '#' && ret[j - 1][k + 2] == '#')
		return (11); /* L 270 degres sens horaire*/
	else if (ft_is_tetribis(ret, j, k) != -1)
		return (ft_is_tetribis(ret, j, k));
	else
	{
		return (-1);
	}
}

static int		ft_tetri_pos(char ***ret)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4 && ret[i][j][k] != '#')
				k++;
			if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) > 0)
			{
				ft_putstr("Tetri :");
				ft_putnbr(ft_is_tetri(ret[i], j, k));
				ft_putchar('\n');
				i++;
				j = 4;
			}
			else if (ret[i][j][k] == '#' && ft_is_tetri(ret[i], j, k) == -1)
				return (-1);
			j++;
		}
	}
	return (1);
}

int		ft_tetrivalid(char ***ret)
{
	if (ft_tetri_count(ret) < 0)
		return (-1);
	else if (ft_tetri_pos(ret) < 0)
		return (-1);
	return (1);
}

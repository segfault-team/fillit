/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reconstruct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:06:45 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/09 16:47:14 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_intbuf_coord(int n)
{
	int		*intbuf;

	intbuf = (int*)malloc(sizeof(*intbuf) * 8);
	if (n == 1)
		intbuf = {0, 0, 1, 0, 1, 1, 0, 1};
	else if (n == 2)
		intbuf = {0, 0, 0, 1, 0, 2, 0, 3};
	else if (n == 3)
		intbuf = {0, 0, 1, 0, 2, 0, 3, 0};
	else if (n == 4)
		intbuf = {0, 0, 0, 1, 1, 1, 1, 2};
	else if (n == 5)
		intbuf = {0, 1, 1, 0, 1, -1, 2, -1};
	else if (n == 6)
		intbuf = {0, 1, 0, 1, 1, 0, 1, -1};
	else if (n == 7)
		intbuf = {0, 0, 1, 0, 1, 1, 2, 1};
	else if (n == 8)
		intbuf = {0, 0, 1, 0, 2, 0, 2, 1};
	else if (n == 9)
		intbuf = {0, 0, 0, 1, 0, 2, 1, 0};
	else if (n == 10)
		intbuf = {0, 0, 0, 1, 1, 1, 2, 1};
	else if (n == 11)
		intbuf = {0, 2, 1, 0, 1, -1, 1, -2};
	else if (n == 12)
		intbuf = {0, 1, 1, 0, 2, 0, 2, -1};
	else if (n == 13)
		intbuf = {0, 0, 1, 0, 1, 1, 1, 2};
	else if (n == 14)
		intbuf = {0, 0, 0, 1, 1, 0, 2, 0};
	else if (n == 15)
		intbuf = {0, 0, 0, 1, 0, 2, 1, 2};
	else if (n == 16)
		intbuf = {0, 0, 0, 1, 0, 2, 1, 1};
	else if (n == 17)
		intbuf = {0, 1, 1, 0, 2, 0, 1, -1};
	else if (n == 18)
		intbuf = {0, 1, 1, -1, 1, 0, 1, 1};
	else if (n == 19)
		intbuf = {0, 0, 1, 0, 2, 0, 1, 1};
	else
		return (-1);
	return (intbuf);
}

char	**ft_fill_bufret(char **bufret)
{
	int		i;

	i = 0;
	bufret = (char**)malloc(sizeof(*bufret) * 20 + 1);
	while (bufret[i])
	{
		bufret[i] = (char*)malloc(sizeof(*bufret) * 17 + 1);
		i++;
	}
	bufret[i] = NULL;
	bufret = ft_intbuf_coord(bufret);
	free(bufret);
	return (bufret);
}

int		**ft_fill_coord(int **coord)
{
	char	**bufret;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	bufret = NULL;
	bufret = ft_fill_bufret(bufret);
/*	while (bufret[i])
	{
		ft_putendl(bufret[i]);
		i++;
	}*/
	coord = (int**)malloc(sizeof(*coord) * 20);
	while (bufret[i] != NULL)
	{
		j = 0;
		coord[i] = (int*)malloc(sizeof(coord) * 8);
		while (bufret[i][j] != '\0' && j <= 18)
		{
			if (bufret[i][j] == ' ')
				j++;
			if (bufret[i][j] == '-')
			{
				j++;
				coord[i][k] = (bufret[i][j] + 48);
				ft_putstr("j : ");
				ft_putchar(bufret[i][j]);
			//	ft_putnbr(coord[i][k]);
				j++;
				k++;
			}
			else
			{
				coord[i][k] = ft_atoi(&bufret[i][j]);
				ft_putchar(bufret[i][j]);
				k++;
			//	ft_putnbr(coord[i][k - 1]);
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (coord);
}

/*
** Enlever atoi
*/

int		main(void)
{
	int		**coord;
	int		i;
	int		j;

	coord = NULL;
	coord = ft_fill_coord(coord);
	if (coord == NULL)
		ft_putendl("NULL");
	i = 0;
	j = 0;
/*	while (coord[i])
	{
		j = 0;
		while (coord[i][j])
		{
			ft_putnbr(coord[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}*/
	return (0);
}

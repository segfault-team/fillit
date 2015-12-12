/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_final_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:10:05 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/12 14:19:02 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** TEST
*/

char	**ft_final_grid(t_flist *maillon)
{
	int		lines_max;
	int		col_max;
	char	**str;

	while (list)
	{
		max += maillon->lines_max;
		col += maillon->col_max;
		maillon = maillon->next;
	}
	str = (char**)malloc(sizeof(*str) * lines_max + 1);
	while (--col_max + 1)
	{
		*str = (char*)malloc(sizeof(char) * col_max + 1);
	}
	return (str);
}

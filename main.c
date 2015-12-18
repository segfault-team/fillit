/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 13:25:14 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


int		main(int ac, char **av)
{
	char	*buf;
	char	***aff;
	int		len;
	t_flist	*begin_list;
	t_flist *list;
	char	**map;
	int		i;

	i = 0;
	list = NULL;
	if (ac != 2)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	buf = ft_read(av);
	len = (int)ft_strlen(buf);
	if (ft_valid_grid(buf, len) != 1)
	{
		ft_putendl_fd("ERROR", 1);
		return (0);
	}
	aff = ft_convert(buf);
	list = ft_tetri_pos(aff, list);
	begin_list = list;
	list = ft_list_prev(list);
	list = begin_list;
	ft_putchar('\n');
	ft_putchar(list->letter);
	ft_putnbr(list->size);
	map = ft_map(map, list->size);
	map = ft_solve(list, map, 0, 0);
	while (map[i])
	{
		ft_putendl(map[i]);
		i++;
	}
	ft_putchar('\n');
	free(buf);
	free(aff);
	return (0);
}

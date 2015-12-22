/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 18:32:11 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_setmap(char **map, t_flist *list, t_flist *begin_list)
{
	begin_list = list;
	list = ft_list_prev(list);
	list = begin_list;
	map = ft_map(map, list->size);
	map = ft_solve(list, map, 0, 0);
	ft_putdstr(map);
	free(map);
}

int				main(int ac, char **av)
{
	char	*buf;
	char	***aff;
	t_flist	*begin_list;
	t_flist *list;
	char	**map;

	list = NULL;
	buf = ft_read(av);
	if (buf == NULL)
		return (ft_error_bis(buf));
	aff = ft_convert(buf);
	if (ft_error(ac) != 1 || ft_error(ft_valgrid(buf, (int)ft_strlen(buf))) != 1
			|| ft_error(ft_tetri_count(aff)) != 1)
		return (0);
	list = ft_pos(aff, list, 0, 0);
	if (list == NULL)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	ft_setmap(map, list, begin_list);
	free(buf);
	free(aff);
	return (0);
}

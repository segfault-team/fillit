/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 18:02:18 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*buf;
	char	***aff;
	t_flist	*begin_list;
	t_flist *list;
	char	**map;

	list = NULL;
	buf = ft_read(av);
	if (buf == NULL)
	{
		ft_putendl_fd("error", 2);
		return (0);
	}
	aff = ft_convert(buf);
	if (ft_error(ac) != 1 || ft_error(ft_valgrid(buf, (int)ft_strlen(buf))) != 1
			|| ft_error(ft_tetri_count(aff)) != 1)
		return (0);
	list = ft_tetri_pos(aff, list);
	if (list == NULL)
	{
		ft_putendl_fd("error", 2);
		return (0);
	}
	begin_list = list;
	list = ft_list_prev(list);
	list = begin_list;
	map = ft_map(map, list->size);
	map = ft_solve(list, map, 0, 0);
	ft_putdstr(map);
	free(map);
	free(buf);
	free(aff);
	return (0);
}

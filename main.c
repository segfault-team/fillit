/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/12 12:24:58 by vlistrat         ###   ########.fr       */
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

	begin_list = NULL;
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
	list = ft_tetri_pos(aff, begin_list);
	while (list)
	{
		ft_putendl(list->forme);
		list = list->next;
	}/*
	if (list == NULL)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}*/
	ft_aff(aff, buf);
	free(buf);
	free(aff);
	return (0);
}

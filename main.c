/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 20:24:42 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*buf;
	char	***aff;
	int		len;

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
	if (ft_tetrivalid(aff) < 0)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	ft_aff(aff, buf);
	free(buf);
	free(aff);
	return (0);
}

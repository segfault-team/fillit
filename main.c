/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:34:04 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 18:10:23 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*buf;
	char	***aff;
	int		len;

	buf = ft_read(av);
	len = (int)ft_strlen(buf);
	if (ft_valid_grid(buf, len) != 1)
	{
		ft_putstr_fd("ERROR", 2);
		return (0);
	}
	aff = ft_convert(buf);
	ft_aff(aff, buf);
	free(buf);
	free(aff);
	return (0);
}

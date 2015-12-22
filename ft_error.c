/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:19:50 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 16:54:23 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_error(int ft)
{
	if (ft != 2)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	return (1);
}

int		ft_error_bis(char *buf)
{
	if (buf == NULL)
	{
		ft_putendl_fd("error", 1);
		return (0);
	}
	return (1);
}

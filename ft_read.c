/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:36:24 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/22 15:57:39 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char **av)
{
	int		fd;
	int		ret;
	char	*buf;
	int		i;

	i = 0;
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (NULL);
	buf = (char*)malloc(sizeof(*buf) * 1);
	buf = (char*)malloc(sizeof(*buf) * BUF_SIZE + 2);
	if (buf == NULL)
		return (NULL);
	ret = read(fd, buf, BUF_SIZE + 2);
	if (ret > 546)
		return (NULL);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

void	ft_putdstr(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putendl(str[i]);
		i++;
	}
}

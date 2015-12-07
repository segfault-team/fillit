/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:36:24 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 12:27:50 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char **av)
{
	int		fd;
	int		ret;
	char	*buf;

	fd = open(av[1], O_RDONLY);
	buf = (char*)malloc(sizeof(*buf) * BUF_SIZE);
	if (buf == NULL)
		return (NULL);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

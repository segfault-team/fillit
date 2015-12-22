/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:57:37 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/02 14:20:54 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*startpnt;
	char	*copie;
	int		i;

	i = 0;
	if (s)
	{
		startpnt = (char*)s + start;
		copie = ft_strnew(len);
		if (copie == NULL)
			return (NULL);
		while (len > 0)
		{
			copie[i] = (char)s[start];
			i++;
			start++;
			len--;
		}
		return (copie);
	}
	return (NULL);
}

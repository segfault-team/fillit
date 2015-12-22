/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_six_ten.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddupart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:22:08 by ddupart           #+#    #+#             */
/*   Updated: 2015/12/22 15:22:10 by ddupart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_flist		*ft_struct_six(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 1;
	new->y = 0;
	new->x1 = 2;
	new->y1 = 0;
	new->x2 = 1;
	new->y2 = 1;
	new->x3 = 0;
	new->y3 = 1;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_seven(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 1;
	new->y2 = 1;
	new->x3 = 1;
	new->y3 = 2;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_eight(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 0;
	new->y2 = 2;
	new->x3 = 1;
	new->y3 = 2;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_nine(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 1;
	new->y1 = 0;
	new->x2 = 2;
	new->y2 = 0;
	new->x3 = 0;
	new->y3 = 1;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_ten(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 1;
	new->y1 = 0;
	new->x2 = 1;
	new->y2 = 1;
	new->x3 = 1;
	new->y3 = 2;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

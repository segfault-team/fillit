/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmaillon.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:45:35 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/18 17:45:53 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_flist		*ft_fillbis(t_flist *maillon, int n, int i)
{
	if (n == 12)
		maillon = ft_struct_twelve(maillon, i);
	if (n == 13)
		maillon = ft_struct_thirteen(maillon, i);
	if (n == 14)
		maillon = ft_struct_fourteen(maillon, i);
	if (n == 15)
		maillon = ft_struct_fifteen(maillon, i);
	if (n == 16)
		maillon = ft_struct_sixteen(maillon, i);
	if (n == 17)
		maillon = ft_struct_seventeen(maillon, i);
	if (n == 18)
		maillon = ft_struct_eighteen(maillon, i);
	if (n == 19)
		maillon = ft_struct_nineteen(maillon, i);
	return (maillon);
}

t_flist				*ft_fillmaillon(t_flist *maillon, int n, int i)
{
	if (n == 1)
		maillon = ft_struct_one(maillon, i);
	if (n == 2)
		maillon = ft_struct_two(maillon, i);
	if (n == 3)
		maillon = ft_struct_three(maillon, i);
	if (n == 4)
		maillon = ft_struct_four(maillon, i);
	if (n == 5)
		maillon = ft_struct_five(maillon, i);
	if (n == 6)
		maillon = ft_struct_six(maillon, i);
	if (n == 7)
		maillon = ft_struct_seven(maillon, i);
	if (n == 8)
		maillon = ft_struct_eight(maillon, i);
	if (n == 9)
		maillon = ft_struct_nine(maillon, i);
	if (n == 10)
		maillon = ft_struct_ten(maillon, i);
	if (n == 11)
		maillon = ft_struct_eleven(maillon, i);
	if (n > 11)
		maillon = ft_fillbis(maillon, n, i);
	return (maillon);
}

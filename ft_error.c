/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:19:50 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/14 12:34:24 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TEST

int		ft_error(int ft)
{
	if (ft < 0)
	{
		ft_putendl_fd("error", 1);
		return (-1);
	}
	return (1);
}

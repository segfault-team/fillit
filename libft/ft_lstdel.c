/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:47:10 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/02 15:34:45 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*list;

	list = *alst;
	if (alst)
	{
		while (list->next)
		{
			ft_lstdelone(&list, del);
			list = (*alst)->next;
		}
		ft_lstdelone(&list, del);
		*alst = NULL;
	}
}

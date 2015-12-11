#include "fillit.h"

t_flist			*ft_addlist(t_flist **begin_list)
{
	t_flist		*maillon;

	maillon = (t_flist*)malloc(sizeof(t_flist));
	if (maillon == NULL)
		return (NULL);
	//maillon->next = *begin_list;
	return (maillon);
}

t_flist			**ft_makelist(char ***ret, t_flist **begin_list)
{
	int			i;
	t_flist		*maillon;

	begin_list = (t_flist**)malloc(sizeof(t_flist));
	if (begin_list == NULL)
		return (NULL);
	i = 0;
	DEBUG
	//(*begin_list)->next = NULL;					//set du pointeur sur t_list
	DEBUG
	while (ret[i] != NULL)
	{
		maillon =  ft_addlist(begin_list);	//tant que ret[i] existe, on cree un nouveau maillon dans la liste
		begin_list = &maillon;
		i++;
	}
	DEBUG
	return (begin_list);
}

int				ft_lstlen(t_flist *begin_list)	//au cas ou
{
	int			i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}


#include "fillit.h"

t_flist		*ft_struct_eleven(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 2;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 1;
	new->y2 = 1;
	new->x3 = 2;
	new->y3 = 1;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_twelve(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 1;
	new->y = 0;
	new->x1 = 1;
	new->y1 = 1;
	new->x2 = 1;
	new->y2 = 2;
	new->x3 = 0;
	new->y3 = 2;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_thirteen(t_flist *new, int i)
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
	new->x3 = 2;
	new->y3 = 1;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_fourteen(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 1;
	new->y1 = 0;
	new->x2 = 0;
	new->y2 = 1;
	new->x3 = 0;
	new->y3 = 2;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_fifteen(t_flist *new, int i)
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
	new->x3 = 2;
	new->y3 = 1;
	new->size = 3;
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

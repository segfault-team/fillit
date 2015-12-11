#include "fillit->h"

t_flist		ft_struct_sixteen(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (new);
	new->x = 0;
	new->y = 0;
	new->x1 = 1;
	new->y1 = 0;
	new->x2 = 2;
	new->y2 = 0;
	new->x3 = 1;
	new->y3 = 1;
	new->forme = "###\n.#.";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_seventeen(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (new);
	new->x = 1;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 0;
	new->y2 = 2;
	new->x3 = -1;
	new->y3 = 1;
	new->forme = ".#\n##\n.#";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_eighteen(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (new);
	new->x = 1;
	new->y = 0;
	new->x1 = -1;
	new->y1 = 1;
	new->x2 = 0;
	new->y2 = 1;
	new->x3 = 1;
	new->y3 = 1;
	new->forme = ".#.\n###";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_nineteen(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (new);
	new->x = 0;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 0;
	new->y2 = 2;
	new->x3 = 1;
	new->y3 = 1;
	new->forme = "#.\n##\n#.";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

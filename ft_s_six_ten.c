#include "fillit.h"

t_flist		ft_struct_six(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	maillon->x = 1;
	maillon->y = 0;
	maillon->x1 = 1;
	maillon->y1 = 0;
	maillon->x2 = 0;
	maillon->y2 = 1;
	maillon->x3 = -1;
	maillon->y3 = 1;
	new->forme = "##\n.##";
	new->prev = NULL;
	new->next = NULL;
}

t_flist		ft_struct_seven(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 0;
	maillon->y1 = 1;
	maillon->x2 = 1;
	maillon->y2 = 1;
	maillon->x3 = 1;
	maillon->y3 = 2;
	new->forme = ".#\n##\n#.";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_eight(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 0;
	maillon->y1 = 1;
	maillon->x2 = 0;
	maillon->y2 = 2;
	maillon->x3 = 1;
	maillon->y3 = 2;
	new->forme = "#.\n##\n.#";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_nine(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 1;
	maillon->y1 = 0;
	maillon->x2 = 2;
	maillon->y2 = 0;
	maillon->x3 = 0;
	maillon->y3 = 1;
	new->forme = "###\n#..;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		ft_struct_ten(t_flist *new)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 1;
	maillon->y1 = 0;
	maillon->x2 = 1;
	maillon->y2 = 1;
	maillon->x3 = 1;
	maillon->y3 = 2;
	new->forme = "##\n.#\n.#";
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

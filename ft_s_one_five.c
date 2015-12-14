#include "fillit.h"

t_flist		*ft_struct_one(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 0;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = 1;
	new->y2 = 0;
	new->x3 = 1;
	new->y3 = 1;
	new->forme = "##\n##";
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_two(t_flist *new, int i)
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
	new->x3 = 3;
	new->y3 = 0;
	new->forme = "####";
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_three(t_flist *new, int i)
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
	new->x3 = 0;
	new->y3 = 3;
	new->forme = "#\n#\n#\n#";
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_four(t_flist *new, int i)
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
	new->x3 = 2;
	new->y3 = 1;
	new->forme = "##.\n.##";
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_flist		*ft_struct_five(t_flist *new, int i)
{
	new = (t_flist*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->x = 1;
	new->y = 0;
	new->x1 = 0;
	new->y1 = 1;
	new->x2 = -1;
	new->y2 = 1;
	new->x3 = -1;
	new->y3 = 2;
	new->forme = ".#\n##\n#.";
	new->letter = (char)i + 'A';
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

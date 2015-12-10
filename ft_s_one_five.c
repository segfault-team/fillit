#include "fillit.h"

void		ft_struct_one(t_flist *maillon)
{
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 0;
	maillon->y1 = 1;
	maillon->x2 = 1;
	maillon->y2 = 0;
	maillon->x3 = 1;
	maillon->y3 = 1;
}

void		ft_struct_two(t_flist *maillon)
{
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 1;
	maillon->y1 = 0;
	maillon->x2 = 2;
	maillon->y2 = 0;
	maillon->x3 = 3;
	maillon->y3 = 0;
}

void		ft_struct_three(t_flist *maillon)
{
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 0;
	maillon->y1 = 1;
	maillon->x2 = 0;
	maillon->y2 = 2;
	maillon->x3 = 0;
	maillon->y3 = 3;
}

void		ft_struct_four(t_flist *maillon)
{
	maillon->x = 0;
	maillon->y = 0;
	maillon->x1 = 1;
	maillon->y1 = 0;
	maillon->x2 = 1;
	maillon->y2 = 1;
	maillon->x3 = 2;
	maillon->y3 = 1;
}

void		ft_struct_five(t_flist *maillon)
{
	maillon->x = 1;
	maillon->y = 0;
	maillon->x1 = 0;
	maillon->y1 = 1;
	maillon->x2 = -1;
	maillon->y2 = 1;
	maillon->x3 = -1;
	maillon->y3 = 2;
}

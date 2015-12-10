#include "fillit.h"

void		ft_struct_one(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 1;
	maillon.y2 = 0;
	maillon.x3 = 1;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "##\n##";
}

void		ft_struct_two(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 1;
	maillon.y1 = 0;
	maillon.x2 = 2;
	maillon.y2 = 0;
	maillon.x3 = 3;
	maillon.y3 = 0;
	maillon.forme = ft_strnew(4);
	maillon.forme = "####";
}

void		ft_struct_three(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 0;
	maillon.y2 = 2;
	maillon.x3 = 0;
	maillon.y3 = 3;
	maillon.forme = ft_strnew(7);
	maillon.forme = "#\n#\n#\n#";
}

void		ft_struct_four(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 1;
	maillon.y1 = 0;
	maillon.x2 = 1;
	maillon.y2 = 1;
	maillon.x3 = 2;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(8);
	maillon.forme = "##\n##";
}

void		ft_struct_five(t_list maillon)
{
	maillon.x = 1;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = -1;
	maillon.y2 = 1;1
	maillon.x3 = -1;1
	maillon.y3 = 2;1
	maillon.forme = ft_strnew(6);
	maillon.forme = "#\n##\n#";
}

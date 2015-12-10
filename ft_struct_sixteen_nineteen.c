#include "fillit.h"

void		ft_struct_sixteen(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 1;
	maillon.y1 = 0;
	maillon.x2 = 2;
	maillon.y2 = 0;
	maillon.x3 = 1;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "###\n#";
}

void		ft_struct_seventeen(t_list maillon)
{
	maillon.x = 1;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 0;
	maillon.y2 = 2;
	maillon.x3 = -1;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(6);
	maillon.forme = "#\n##\n#";
}

void		ft_struct_eighteen(t_list maillon)
{
	maillon.x = 1;
	maillon.y = 0;
	maillon.x1 = -1;
	maillon.y1 = 1;
	maillon.x2 = 0;
	maillon.y2 = 1;
	maillon.x3 = 1;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "#\n###";
}

void		ft_struct_nineteen(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 0;
	maillon.y2 = 2;
	maillon.x3 = 1;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "###\n#";
}

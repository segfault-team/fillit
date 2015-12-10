#include "fillit.h"

void		ft_struct_eleven(t_list maillon)
{
	maillon.x = 2;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = -1;
	maillon.y2 = 1;
	maillon.x3 = -2;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "#\n###";
}

void		ft_struct_twelve(t_list maillon)
{
	maillon.x = 1;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 0;
	maillon.y2 = 1;
	maillon.x3 = -1;
	maillon.y3 = 2;
	maillon.forme = ft_strnew(6);
	maillon.forme = "#\n#\n##";
}

void		ft_struct_thirteen(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 0;
	maillon.y1 = 1;
	maillon.x2 = 1;
	maillon.y2 = 1;
	maillon.x3 = 2;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "#\n###";
}

void		ft_struct_fourteen(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 1;
	maillon.y1 = 0;
	maillon.x2 = 0;
	maillon.y2 = 1;
	maillon.x3 = 0;
	maillon.y3 = 2;
	maillon.forme = ft_strnew(6);
	maillon.forme = "##\n#\n#";
}

void		ft_struct_fifteen(t_list maillon)
{
	maillon.x = 0;
	maillon.y = 0;
	maillon.x1 = 1;
	maillon.y1 = 0;
	maillon.x2 = 2;
	maillon.y2 = 0;
	maillon.x3 = 2;
	maillon.y3 = 1;
	maillon.forme = ft_strnew(5);
	maillon.forme = "###\n#";
}

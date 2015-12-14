#include "fillit.h"

char		**ft_map(char **map, t_flist *list)
{
	int 	i;
	int 	j;
	
	i = 0;
	map = (char**)malloc(sizeof(*map) * list->size + 1);
	while (i < list->size)
	{
		map[i] = (char*)malloc(sizeof(*map) * list->size + 1);
		j = 0;
		while (j < list->size)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][3] = '\0';
		i++;
	}
	map[list->size] = NULL;
	ft_putchar('\n');
//	map = ft_clear_map(map);
	return (map);
}

char		**ft_clear_map(char **map)
{
	int		i;
	int		j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

void		ft_fillmap(t_list *begin_list, char **map, int j, int k)
{
	while (map[j][k] != '.' && map[j + lst->y2][k + lst->x2] != '.' 
			&& map[j + lst->y3][k + lst->x3] != '.' && map[j + lst->y4][k + lst->x4] != '.')
		{
			k++;
			if (map[j][k] == '\0')
			{
				j++;
				k = 0;
			}
		}
	map[j][k] = lst->letter;
	map[j + lst->y2][k + lst->x2] = lst->letter;
	map[j + lst->y3][k + lst->x3] = lst->letter;
	map[j + lst->y4][k + lst->x4] = lst->letter;	
}

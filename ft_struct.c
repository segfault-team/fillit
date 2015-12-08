#include "fillit.h"

int	ft_ret_size(char ***ret)
{
	int	i;

	i = 0;
	while (ret[i])
		i++;
	return (i);
}

int	**ft_coord(char ***ret)
{
	int	**coord;
	int	i;

	i = 0;
	coord = (int**)malloc(sizeof(*coord) * ft_ret_size(ret));
	while (i < ft_ret_size(ret))
	{
		coord[i] = (int*)malloc(sizeof(coord) * 9);
		i++;
	}
	return (coord);
}

int	**ft_fill_coord(int i, int j, int k, int **coord)
{
	coord[i][0] = j;
	coord[i][1] = k;
	return (coord);
}

int	**ft_struct(char ***ret)
{
	int	i;
	int	j;
	int	k;
	int	**coord;

	i = 0;
	coord = ft_coord(ret);
	while (ret[i])
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k < 4 && ret[i][j][k] != '#')
				k++;
			if (ret[i][j][k] == '#')
			{
				coord = ft_fill_coord(i, j, k, coord);
				coord[i][2] = ft_is_tetri(ret[i], j, k);
				i++;
				j = 4;
			}
			j++;
		}
	}
	return (coord);
}

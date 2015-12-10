#include

char		**ft_map()
{
	int 	i;
	
	i = 0;
	map = (char**)malloc(sizeof(*map) * 16 + 1);
	while (i < 16)
	{
		map[i] = (char*)malloc(sizeof(*map) * 16 + 1);
		map[16] = '\0';
		i++;
	}
	map[16] = NULL;
	ft_clear_map(map);
	return (map);
}

void		ft_clear_map(char **map)
{
	int		i;
	int		j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			map[i][j] = ".";
			j++;
		}
		i++;
	}
}

void		ft_fillmap(t_list *begin_list, char **map, int j, int k)
{

}

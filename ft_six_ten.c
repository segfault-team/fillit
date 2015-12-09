#include "fillit.h"

int	ft_six(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 1 <= 3 && k - 1 >= 0)
	{
		if (ret[j][k + 1] == '#' && ret[j + 1][k] == '#' && ret[j + 1][k - 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_seven(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k + 1 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j + 1][k + 1] == '#' && ret[j + 2][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_eight(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k + 1 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j + 2][k] == '#' && ret[j + 2][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_nine(char **ret, int j, int k)
{
	if (j + 1 <= 3 && k + 2 <= 3)
	{
		if (ret[j + 1][k] == '#' && ret[j][k + 1] == '#' && ret[j][k + 2] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}

int	ft_ten(char **ret, int j, int k)
{
	if (j + 2 <= 3 && k + 1 <= 3)
	{
		if (ret[j][k + 1] == '#' && ret[j + 1][k + 1] == '#' && ret[j + 2][k + 1] == '#')
			return (1);
		else
			return (-1);
	}
	return (-1);
}
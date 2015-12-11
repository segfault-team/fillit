#include "fillit.h"

static t_flist		*ft_fillbis(t_flist *maillon, int n)
{
	if (n == 12)
		maillon = ft_struct_twelve(maillon);
	if (n == 13)
		maillon = ft_struct_thirteen(maillon);
	if (n == 14)
		maillon = ft_struct_fourteen(maillon);
	if (n == 15)
		maillon = ft_struct_fifteen(maillon);
	if (n == 16)
		maillon = ft_struct_sixteen(maillon);
	if (n == 17)
		maillon = ft_struct_seventeen(maillon);
	if (n == 18)
		maillon = ft_struct_eighteen(maillon);
	if (n == 19)
		maillon = ft_struct_nineteen(maillon);
	return (maillon);
}
	
t_flist			*ft_fillmaillon(t_flist *maillon, int n)
{
	if (n == 1)
		maillon = ft_struct_one(maillon);
	if (n == 2)
		maillon = ft_struct_two(maillon);
	if (n == 3)
		maillon = ft_struct_three(maillon);
	if (n == 4)
		maillon = ft_struct_four(maillon);
	if (n == 5)
		maillon = ft_struct_five(maillon);
	if (n == 6)
		maillon = ft_struct_six(maillon);
	if (n == 7)
		maillon = ft_struct_seven(maillon);
	if (n == 8)
		maillon = ft_struct_eight(maillon);
	if (n == 9)
		maillon = ft_struct_nine(maillon);
	if (n == 10)
		maillon = ft_struct_ten(maillon);
	if (n == 11)
		maillon = ft_struct_eleven(maillon);
	if (n > 11)
		maillon = ft_fillbis(maillon, n);
	return (maillon);
}

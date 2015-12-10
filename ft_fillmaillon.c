#include "fillit.h"

static void		ft_fillbis(t_list maillon, int n)
{
	if (n == 12)
		ft_struct_twelve(maillon);
	if (n == 13)
		ft_struct_thirteen(maillon);
	if (n == 14)
		ft_struct_fourteen(maillon);
	if (n == 15)
		ft_struct_fifteen(maillon);
	if (n == 16)
		ft_struct_sixteen(maillon);
	if (n == 17)
		ft_struct_seventeen(maillon);
	if (n == 18)
		ft_struct_eighteen(maillon);
	if (n == 19)
		ft_struct_nineteen(maillon);
}
	
void			ft_fillmaillon(t_list maillon, int n)
{
	if (n == 1)
		ft_struct_one(maillon);
	if (n == 2)
		ft_struct_two(maillon);
	if (n == 3)
		ft_struct_three(maillon);
	if (n == 4)
		ft_struct_four(maillon);
	if (n == 5)
		ft_struct_five(maillon);
	if (n == 6)
		ft_struct_six(maillon);
	if (n == 7)
		ft_struct_seven(maillon);
	if (n == 8)
		ft_struct_eight(maillon);
	if (n == 9)
		ft_struct_nine(maillon);
	if (n == 10)
		ft_struct_ten(maillon);
	if (n == 11)
		ft_struct_eleven(maillon);
	if (n > 11)
		ft_fillbis(maillon, n);
}

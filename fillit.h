/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:36:40 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/14 18:13:53 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 546
# define DEBUG ft_putendl("DEBUG");

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft.h"

typedef struct			s_flist
{
	int					x;
	int					y;
	int					x1;
	int					y1;
	int					x2;
	int					y2;
	int					x3;
	int					y3;
	int					size;
	char				letter;
	struct s_flist		*prev;
	struct s_flist		*next;
}						t_flist;

char					*ft_read(char **av);
int						ft_valid_grid(char *buf, int ret);
int						ft_count(char *buf);
char					***ft_fill(char *buf, char ***ret);
void					ft_aff(char ***ret, char *buf);
char					***ft_convert(char *buf);
int						ft_tetrivalid(char ***ret, t_flist *newlist);
int						ft_one(char **ret, int j, int k);
int						ft_two(char **ret, int j, int k);
int						ft_three(char **ret, int j, int k);
int						ft_four(char **ret, int j, int k);
int						ft_five(char **ret, int j, int k);
int						ft_six(char **ret, int j, int k);
int						ft_seven(char **ret, int j, int k);
int						ft_eight(char **ret, int j, int k);
int						ft_nine(char **ret, int j, int k);
int						ft_ten(char **ret, int j, int k);
int						ft_eleven(char **ret, int j, int k);
int						ft_twelve(char **ret, int j, int k);
int						ft_thirteen(char **ret, int j, int k);
int						ft_fourteen(char **ret, int j, int k);
int						ft_fifteen(char **ret, int j, int k);
int						ft_sixteen(char **ret, int j, int k);
int						ft_seventeen(char **ret, int j, int k);
int						ft_eighteen(char **ret, int j, int k);
int						ft_nineteen(char **ret, int j, int k);
int						ft_part_one(char **ret, int j, int k);
int						ft_part_two(char **ret, int j, int k);
int						ft_is_tetri(char **ret, int j, int k);
t_flist					*ft_struct_one(t_flist *maillon, int i);
t_flist					*ft_struct_two(t_flist *maillon, int i);
t_flist					*ft_struct_three(t_flist *maillon, int i);
t_flist					*ft_struct_four(t_flist *maillon, int i);
t_flist					*ft_struct_five(t_flist *maillon, int i);
t_flist					*ft_struct_six(t_flist *maillon, int i);
t_flist					*ft_struct_seven(t_flist *maillon, int i);
t_flist					*ft_struct_eight(t_flist *maillon, int i);
t_flist					*ft_struct_nine(t_flist *maillon, int i);
t_flist					*ft_struct_ten(t_flist *maillon, int i);
t_flist					*ft_struct_eleven(t_flist *maillon, int i);
t_flist					*ft_struct_twelve(t_flist *maillon, int i);
t_flist					*ft_struct_thirteen(t_flist *maillon, int i);
t_flist					*ft_struct_fourteen(t_flist *maillon, int i);
t_flist					*ft_struct_fifteen(t_flist *maillon, int i);
t_flist					*ft_struct_sixteen(t_flist *maillon, int i);
t_flist					*ft_struct_seventeen(t_flist *maillon, int i);
t_flist					*ft_struct_eighteen(t_flist *maillon, int i);
t_flist					*ft_struct_nineteen(t_flist *maillon, int i);
t_flist					*ft_addlist(t_flist **begin_list);
t_flist					**ft_makelist(char ***ret, t_flist **begin_list);
int						ft_lstlen(t_flist *begin_list);
t_flist					*ft_fillmaillon(t_flist *maillon, int n, int i);
t_flist					*ft_tetri_pos(char ***ret, t_flist *begin_list);
int						ft_error(int ft);
char					**ft_map(char **map, t_flist *list);
char					**ft_clear_map(char **map);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:36:40 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 20:04:24 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 546

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft.h"

char	*ft_read(char **av);
int		ft_valid_grid(char *buf, int ret);
int		ft_count(char *buf);
char	***ft_fill(char *buf, char ***ret);
void	ft_aff(char ***ret, char *buf);
char	***ft_convert(char *buf);
int		ft_tetrivalid(char ***ret);
int	ft_one(char **ret, int j, int k);
int	ft_two(char **ret, int j, int k);
int	ft_three(char **ret, int j, int k);
int	ft_four(char **ret, int j, int k);
int	ft_five(char **ret, int j, int k);
int	ft_six(char **ret, int j, int k);
int	ft_seven(char **ret, int j, int k);
int	ft_eight(char **ret, int j, int k);
int	ft_nine(char **ret, int j, int k);
int	ft_ten(char **ret, int j, int k);
int	ft_eleven(char **ret, int j, int k);
int	ft_twelve(char **ret, int j, int k);
int	ft_thirteen(char **ret, int j, int k);
int	ft_fourteen(char **ret, int j, int k);
int	ft_fifteen(char **ret, int j, int k);
int	ft_sixteen(char **ret, int j, int k);
int	ft_seventeen(char **ret, int j, int k);
int	ft_eighteen(char **ret, int j, int k);
int	ft_nineteen(char **ret, int j, int k);
int	ft_part_one(char **ret, int j, int k);
int	ft_part_two(char **ret, int j, int k);
int	ft_is_tetri(char **ret, int j, int k);

#endif

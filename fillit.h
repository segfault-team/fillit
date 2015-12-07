/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 11:36:40 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/07 18:25:47 by vlistrat         ###   ########.fr       */
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

#endif

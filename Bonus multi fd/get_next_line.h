/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafonso <flafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 13:12:27 by flafonso          #+#    #+#             */
/*   Updated: 2019/03/21 16:01:27 by flafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "./libft/libft.h"
#include <stdio.h>
# define BUFF_SIZE  12

typedef struct		s_listt
{
	char			*str;
	int				fd;
	int				i;
	struct s_listt	*next;
}					t_listt;

int					get_next_line(const int fd, char **line);

#endif

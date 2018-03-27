/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ftreand <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/22 15:54:10 by ftreand      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/22 18:11:19 by ftreand     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
/*
(void *param)
{
	t_window *win;

	win = (t_window*)param;
}*/
// perspective axonometrique wikipedia
#ifndef FDF_H
# define FDF_H
# include "mlx.h"
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>

typedef struct	s_point
{
	int x;
	int y;
	int z;
	int color;
}
				t_point;

int		main(int ac, char **av);

# endif
